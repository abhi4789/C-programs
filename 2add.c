#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum;
    float avg;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    avg=sum/2.0;

    printf("The sum is = %d, \t avgerage %f",sum,avg);
}

