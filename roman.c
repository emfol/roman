
char *roman(unsigned int n, char *buf) {
  struct digit {
    unsigned int scale;
    char digit[2];
  } digits[] = {
    { 1000, { 'M', '\0' } },
    { 100, { 'C', 'D' } },
    { 10, { 'X', 'L' } },
    { 1, { 'I', 'V' } }
  };
  char *bp = buf;
  int i;
  for (i = 0; i < (sizeof digits / sizeof(struct digit)) && n > 0; ++i) {
    struct digit *dp = digits + i;
    unsigned int rem = n % dp->scale;
    unsigned int den = (n - rem) / dp->scale;
    if (i > 0) {
      if (den == 9) {
        *bp++ = dp->digit[0];
        *bp++ = (dp - 1)->digit[0];
        den = 0;
      } else if (den >= 5) {
        *bp++ = dp->digit[1];
        den -= 5;
      } else if (den == 4) {
        *bp++ = dp->digit[0];
        *bp++ = dp->digit[1];
        den = 0;
      }
    }
    while (den > 0) {
      *bp++ = dp->digit[0];
      --den;
    }
    n = rem;
  }
  *bp = '\0';
  return buf;
}

