//Program to calculate the square of a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,square;
    printf("Enter any number\n");
    scanf("%d",&num);
    square=num*num;
    printf("Square of %d is %d",num,square);
    getch();
}