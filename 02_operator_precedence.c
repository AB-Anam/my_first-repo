#include <stdio.h>

int main()
{
  int x = 4;
  int y = 9;
  printf("The value of 3*x - 8*y is %d \n", 3 * x - 8 * y);

  int a = 2;
  int b = 3;
  //left to right associativity
  printf("The value of 8*b/3*a is %d \n", 8 * b / 3 * a);

  return 0;
}