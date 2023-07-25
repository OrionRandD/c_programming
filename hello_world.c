#include <stdio.h>
// add standard input-output library
int main()
// type is "int" and identifier is "main"
{
    // printf is a function sitting in "stdio.h"
    // "Hello World" is a string
    // "\n" is a control new-line character
    printf("Hello World\n");
    // "return 0" is executed if everything goes OK
    return 0;

    // for compiling this code, do it in the terminal:
    // gcc hello_world.c // or
    // clang hello_world.c
    // you have to install gcc and clang
    // on debian, do:
    // sudo apt install gcc clang
}

