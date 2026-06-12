// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define PRINT_TYPE(type)                                                       \
  printf("size of %s : %zu bytes \n", #type, sizeof(type));

int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, uint16_t, uint32_t, and uint64_t, uint_fast8_t,
  // uint_fast16_t, uintmax_t, intmax_t, __int128, and student

  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.
  PRINT_TYPE(int);
  PRINT_TYPE(short);
  PRINT_TYPE(long);
  PRINT_TYPE(char);
  PRINT_TYPE(float);
  PRINT_TYPE(double);
  PRINT_TYPE(unsigned int);
  PRINT_TYPE(long long);
  PRINT_TYPE(uint8_t);
  PRINT_TYPE(uint16_t);
  PRINT_TYPE(uint32_t);
  PRINT_TYPE(uint64_t);
  PRINT_TYPE(uint_fast8_t);
  PRINT_TYPE(uint_fast16_t);
  PRINT_TYPE(uintmax_t);
  PRINT_TYPE(intmax_t);
  PRINT_TYPE(int64_t);
	PRINT_TYPE(__int128);
	PRINT_TYPE(int *);
	PRINT_TYPE(short *);
	PRINT_TYPE(long *);
	PRINT_TYPE(char *);
	PRINT_TYPE(float *);
	PRINT_TYPE(double *);
	PRINT_TYPE(unsigned int *);
	PRINT_TYPE(long long *);
	PRINT_TYPE(uint8_t *);
	PRINT_TYPE(uint16_t *);
	PRINT_TYPE(uint32_t *);
	PRINT_TYPE(uint64_t *);
	PRINT_TYPE(uint_fast8_t *);
	PRINT_TYPE(uint_fast16_t *);
	PRINT_TYPE(uintmax_t *);
	PRINT_TYPE(intmax_t *);
	PRINT_TYPE(int64_t *);
  PRINT_TYPE(__int128 *);
  // e.g. PRINT_SIZE("int", int);
  //      PRINT_SIZE("short", short);

  // Alternatively, you can use stringification
  // (https://gcc.gnu.org/onlinedocs/cpp/Stringification.html) so that
  // you can write
  // e.g. PRINT_SIZE(int);
  //      PRINT_SIZE(short);

  // Composite types have sizes too.
  typedef struct {
    int id;
    int year;
  } student;

  student you;
  you.id = 12345;
  you.year = 4;

  // Array declaration. Use your macro to print the size of this.
  int x[5];

  // You can just use your macro here instead: PRINT_SIZE("student", you);
  PRINT_TYPE(student);
  PRINT_TYPE(student *);
  PRINT_TYPE(x);
  PRINT_TYPE(&x);

  return 0;
}
