// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define str(s) #s       // Converts input to string
#define xstr(s) str(s)
#define Print_Size(var) printf("size of %s : %zu bytes \n", xstr(var), sizeof(var))

int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, uint16_t, uint32_t, and uint64_t, uint_fast8_t,
  // uint_fast16_t, uintmax_t, intmax_t, __int128, and student

  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.

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
  student * py = &you;


  // Array declaration. Use your macro to print the size of this.
  int x[5];
  int (*px)[5] = &x;
  // You can just use your macro here instead: PRINT_SIZE("student", you);
  Print_Size(int);
  Print_Size( short);
  Print_Size( long);
  Print_Size( char);
  Print_Size( float);
  Print_Size( double);
  Print_Size( unsigned int);
  Print_Size( long long);
  Print_Size( uint8_t);
  Print_Size( uint16_t);
  Print_Size( uint32_t);
  Print_Size( uint64_t);
  Print_Size( uint_fast8_t);
  Print_Size( uint_fast16_t);
  Print_Size( uintmax_t);
  Print_Size( intmax_t);
  Print_Size( __int128);
  Print_Size( uint32_t);
  Print_Size( uint64_t);
  Print_Size( student);
  Print_Size( x);
  Print_Size(int*);
  Print_Size( short*);
  Print_Size( long*);
  Print_Size( char*);
  Print_Size( float*);
  Print_Size( double*);
  Print_Size( unsigned int*);
  Print_Size( long long*);
  Print_Size( uint8_t*);
  Print_Size( uint16_t*);
  Print_Size( uint32_t*);
  Print_Size( uint64_t*);
  Print_Size( uint_fast8_t*);
  Print_Size( uint_fast16_t*);
  Print_Size( uintmax_t*);
  Print_Size( intmax_t*);
  Print_Size( __int128*);
  Print_Size( uint32_t*);
  Print_Size( uint64_t*);
  Print_Size( student*);
  Print_Size(&x);


  return 0;
}
