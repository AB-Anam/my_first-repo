#include<stdio.h>

int main()
{
  int length,breadth;
  printf("What is the length of your Rectangle?\n");
  scanf("%d",&length);

  printf("What is breadth of your Rectangle?\n");
  scanf("%d",&breadth);

  printf("The area of your Rectangle is %d", length*breadth);
  return 0;
}