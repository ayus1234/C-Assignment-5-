//Program to calculate the area of a circle

#include<stdio.h>
#include<conio.h>
int main()
{
    float r,area;
    printf("Enter the Radius of the Circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of the Circle =%f",area);
    getch();
}