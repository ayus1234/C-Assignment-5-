//Program to calculate the average of three numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average =%f",avg);
    getch();
}