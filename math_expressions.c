#include <stdio.h>
// code to calculate the area of a circle

int main()

{

  double radius;
  printf("Please enter a radius number: ");
  scanf("%lf", &radius);
  double area = 3.14 * (radius * radius); // math expression
  printf("The area of a circle with %.2f radius is %.2f\n", radius, area);

  return 0;

}
