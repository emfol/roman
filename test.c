#include <string.h>
#include <assert.h>
#include <stdio.h>
#include "roman.h"

int main(void) {
  char buf[128];
  assert(strcmp(roman(0, buf), "") == 0);
  assert(strcmp(roman(1, buf), "I") == 0);
  assert(strcmp(roman(2, buf), "II") == 0);
  assert(strcmp(roman(3, buf), "III") == 0);
  assert(strcmp(roman(4, buf), "IV") == 0);
  assert(strcmp(roman(5, buf), "V") == 0);
  assert(strcmp(roman(6, buf), "VI") == 0);
  assert(strcmp(roman(7, buf), "VII") == 0);
  assert(strcmp(roman(8, buf), "VIII") == 0);
  assert(strcmp(roman(9, buf), "IX") == 0);
  assert(strcmp(roman(10, buf), "X") == 0);
  assert(strcmp(roman(11, buf), "XI") == 0);
  assert(strcmp(roman(12, buf), "XII") == 0);
  assert(strcmp(roman(13, buf), "XIII") == 0);
  assert(strcmp(roman(14, buf), "XIV") == 0);
  assert(strcmp(roman(15, buf), "XV") == 0);
  assert(strcmp(roman(16, buf), "XVI") == 0);
  assert(strcmp(roman(17, buf), "XVII") == 0);
  assert(strcmp(roman(18, buf), "XVIII") == 0);
  assert(strcmp(roman(19, buf), "XIX") == 0);
  assert(strcmp(roman(20, buf), "XX") == 0);
  assert(strcmp(roman(21, buf), "XXI") == 0);
  assert(strcmp(roman(22, buf), "XXII") == 0);
  assert(strcmp(roman(23, buf), "XXIII") == 0);
  assert(strcmp(roman(24, buf), "XXIV") == 0);
  assert(strcmp(roman(25, buf), "XXV") == 0);
  assert(strcmp(roman(39, buf), "XXXIX") == 0);
  assert(strcmp(roman(40, buf), "XL") == 0);
  assert(strcmp(roman(41, buf), "XLI") == 0);
  assert(strcmp(roman(42, buf), "XLII") == 0);
  assert(strcmp(roman(43, buf), "XLIII") == 0);
  assert(strcmp(roman(44, buf), "XLIV") == 0);
  assert(strcmp(roman(45, buf), "XLV") == 0);
  assert(strcmp(roman(50, buf), "L") == 0);
  assert(strcmp(roman(100, buf), "C") == 0);
  assert(strcmp(roman(101, buf), "CI") == 0);
  assert(strcmp(roman(111, buf), "CXI") == 0);
  assert(strcmp(roman(160, buf), "CLX") == 0);
  assert(strcmp(roman(207, buf), "CCVII") == 0);
  assert(strcmp(roman(246, buf), "CCXLVI") == 0);
  assert(strcmp(roman(500, buf), "D") == 0);
  assert(strcmp(roman(555, buf), "DLV") == 0);
  assert(strcmp(roman(789, buf), "DCCLXXXIX") == 0);
  assert(strcmp(roman(1009, buf), "MIX") == 0);
  assert(strcmp(roman(1066, buf), "MLXVI") == 0);
  assert(strcmp(roman(1776, buf), "MDCCLXXVI") == 0);
  assert(strcmp(roman(1918, buf), "MCMXVIII") == 0);
  assert(strcmp(roman(1954, buf), "MCMLIV") == 0);
  assert(strcmp(roman(2014, buf), "MMXIV") == 0);
  assert(strcmp(roman(2421, buf), "MMCDXXI") == 0);
  assert(strcmp(roman(0, buf), "") == 0);
  puts("OK");
  return 0;
}
