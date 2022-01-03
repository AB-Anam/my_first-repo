#include<stdio.h>

int fibonacci(int num);
int main()
{
  int a;
  printf("Enter the number\n");
  scanf("%d\n",&a);
  fibonacci(a);
  return 0;
}

int fibonacci(int num)
{
  int s = 0;
  if(s == num)
  {
    return 0;
  }
  else
  {
    return fibonacci(s) + fibonacci(s + 1);
  }
   s++;  
}
