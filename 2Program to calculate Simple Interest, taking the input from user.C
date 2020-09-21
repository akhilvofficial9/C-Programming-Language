/* 2:Program to calculate Simple Interest, taking the input from user
Author: Akhil Verma
Date: 21 September,2020
Practice Day:1*/
#include<stdio.h>
#include<conio.h>
void main()
{
int p,n;
float r,si;
clrscr();
printf("Enter the values\nPrinciple\nNumber of Years\nRate of Interest\n\n");
scanf("%d%d%f",&p,&n,&r);
si=p*n*r/100;
printf("Simple Interest is %f", si);
getch();
}

