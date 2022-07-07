//Program which takes a character as input and print its ASCII code

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    printf("ASCII Code = %d",ch);
    getch();
}