#include <stdio.h>

int main()

{

  // 25000
  int dogs = 2.5e4; // "e" stands for exponential. It is a scientific notation 
  // double dogs = 2.4e4; // "e" stands for exponential. It is a scientific notation 

  printf("I\'ve got %f dogs\n", dogs);
  printf("I\'ve got %e dogs\n", dogs);
  printf("I\'ve got %g dogs\n", dogs);

  return 0;

  // %f control character
  // %e control character
  // %g control character (< -4 and > 5)

}
