#include<stdio.h>
int main()
{
    float c,q,p,r;
    scanf("%f%f",&c,&q);
    if(c==1)
    {
        p=4;
    }
    else if(c==2)
{
    p=4.50;
}
else if(c==3)
{
    p=5.00;
}
else if(c==4)
{
    p=2.00;
}
else if(c==5)
{
    p=1.50;
}
r=p*q;
printf("Total: R$ %.2f\n",r);
    return 0;
}
