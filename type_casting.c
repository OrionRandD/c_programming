#include <stdio.h>

int main()

{

  printf("What was the number of eggs you've got today? ");

  int eggs;

  scanf("%i", &eggs);

  double dozen = (double) eggs / 12; // casting integer (eggs) into double 

  printf("You\'ve got %.2f dozen eggs.\n", dozen); // you have to escape
                                                 // the "'" single
                                                 // quote inside this string
 return 0;

}
