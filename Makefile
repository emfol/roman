CC := cc
CFLAGS := -std=c89 -Wall -Wpedantic

test: test.exe
	./test.exe

test.exe: roman.o test.c
	$(CC) -o $@ $^

roman.exe: roman.o main.c
	$(CC) -o $@ $^

roman.o: roman.c roman.h
	$(CC) -c $(CFLAGS) $<

.PHONY: test
