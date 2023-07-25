#include <stdio.h>

// Function to get the area of a circle

int main()
{
  double radius; // declaring a variable (radius is the distance from the
              // outside circle to its centre
  printf("Please, enter a radius value: "); // printf is a function defined in the stdio.h library
  scanf("%lf", &radius); /* scanf is a function that interactevely gets
                           a value from the user. In this case,
                           radius is located in the memory where the
                           "&" (pointer) is holding it. Here the
                           variable radius is initialised as well */
  printf("The given radius value is %.2f\n", radius); // "%.2f" means
                                                      // two decimal houses
  return 0;
}
