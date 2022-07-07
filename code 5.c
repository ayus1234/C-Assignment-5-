//Program to calculate the area of a rectangle

#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,area;
    printf("Enter the Length and Breadth of the Rectangle\n");
    scanf("%d %d",&l,&b);
    area=l*b;
    printf("Area of the Rectangle =%d",area);
    getch();
}