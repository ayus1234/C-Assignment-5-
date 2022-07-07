//Program to calculate the sum of two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of %d and %d is %d",a,b,sum);
    getch();
}