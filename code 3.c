//Program to calculate the volume of a Cuboid

#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,h,volume;
    printf("Enter the length, breadth and height of the cuboid\n");
    scanf("%f %f %f",&l,&b,&h);
    volume=l*b*h;
    printf("Volume of the Cuboid =%f",volume);
    getch();
}