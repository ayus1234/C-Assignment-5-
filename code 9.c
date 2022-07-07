//Program to calculate the profit percentage upon selling a product. Cost price and selling price are given by the user

#include<stdio.h>
#include<conio.h>
int main()
{
    float CP,SP,profit;
    float profit_percent;
    printf("Enter the Cost Price and Selling Price of the Product\n");
    scanf("%f %f",&CP,&SP);
    profit=SP-CP;
    profit_percent=(profit*100)/CP;
    printf("Profit Percentage of the Product = %f",profit_percent);
    getch();
}