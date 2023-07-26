#include <stdio.h>

int main()

{

  printf("Have you got how many dogs? ");
  double dogs; // declare the variable
  scanf("%lf", &dogs); // initialise the variable. "lf" can read
                       // scientific and decimal notation
  printf("You\'ve got %.2f dogs dude!\n" ,dogs);
  return 0;

}
