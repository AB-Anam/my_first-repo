#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, factor = 1,count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp)
    {
        temp = temp / 10;
        count++;
        //factor = factor * 10;
    }
      factor = 10(pow)count;
    printf("Each digits of given number are: ");

    while (factor > 1)
    {
        factor = factor / 10;
        printf("%d ", num / factor);
        num = num % factor;
    }

    printf("count is %d",count);
}
