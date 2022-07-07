//Program to calculate the simple interest

#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,SI;
    printf("Enter the Principal, Rate and Time\n");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("Simple Interest =%f",SI);
    getch();
}