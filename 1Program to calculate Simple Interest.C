/* 1:Program to calculate Simple Interest
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
p=5000;
n=3;
r=7.5;
si=p*n*r/100;
printf("Simple Interest is %f",si);
getch();
}