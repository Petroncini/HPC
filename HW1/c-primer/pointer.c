// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[]) {  // What is the type of argv?
  int i = 5;
  // The & operator here gets the address of i and stores it into pi
  int * pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  int j = *pi;

  char c[] = "6.172";
  char * pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // What does this print?

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char ** pcp;
  pcp = argv;  // Why is this assignment valid? Because argv is a pointer to an array of pointers to chars (strings)

  const char * pcc = c;  // pcc is a pointer to char constant
  char const * pcc2 = c;  // What is the type of pcc2? pointer to a const char

  // For each of the following, why is the assignment:
  // *pcc = '7';  // invalid? because pcc pounts to c which is const
  pcc = *pcp;  // valid? pcc itself isnt const, and *pcp is a string (pointer ot char)
  pcc = argv[0];  // valid? [0] dereferences argv so we get a a string (piinter to char)

  char * const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  // cp = *pcp;  // invalid? cp is const
  // cp = *argv;  // invalid? smae thing
  *cp = '!';  // valid? the varaible cp points to isnt itself const

  const char * const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  // cpc = *pcp;  // invalid? cpc cant change
  // cpc = argv[0];  // invalid? cpc cant change
  // *cpc = '@';  // invalid? the variable cpc points to cant itself change

  return 0;
}
