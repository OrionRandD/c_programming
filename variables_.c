#include <stdio.h>
// Variables in C

int main() // you put NO ";" in the entry function

{

  char name [31]; // the extra "1" character is added here is called
                  // the nul character "\0" and it is necessary for
                  // ending a string
  // this array has got 30 chars plus the nul char

  printf("Girl! Could you tell me your name? ");

  scanf("%s", name ); // you do not need the pointer "&" to get char arrays 

  printf("%s! You look very nice today.\nWould you like to go out?\n", name);

  return 0;

}
