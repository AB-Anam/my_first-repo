#include <stdio.h>
#include <math.h>

int main()
{
  int a = 4;
  int b = 8;

  printf("the value of a+b is:%d\n", a + b);
  printf("the value of a-b is:%d\n", a - b);
  printf("the value of a*b is:%d\n", a * b);
  printf("the value of a/b is:%d\n", a / b);

  int z = b*a; // legal
  //int b*a =z; //illegal
  printf("The value of z is %d\n",z);

  printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
  printf("-5 when divided by 2 leaves a remainder of %d\n",-5%2);
  printf("5 when divided by -2 leaves a remainder of %d\n",5%-2);

  //There is no operator to perform exponentiation in c

  printf("The value of 4 to the power 5 is: %f\n",pow(4,5));

  printf("The value of 6+5 is: %d\n",5+6);
  printf("The value of 6+5.6 is: %f\n",5.6+6);
  printf("The value of 6.1+5.6 is: %f\n",5.6+6.1);
  printf("The value of 3.0 / 9 is: %f\n",3.0/9);

  return 0;
}