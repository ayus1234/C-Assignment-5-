//Program to calculate the area of a triangle where base and height of the triangle are given

#include<stdio.h>
#include<conio.h>
int main()
{
    int b,h;
    float area;
    printf("Enter the Base and Height of the Triangle\n");
    scanf("%d %d",&b,&h);
    area=0.5*b*h;
    printf("Area of the Triangle = %f",area);
    getch();
}