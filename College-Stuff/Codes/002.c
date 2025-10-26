//Write a C program to find the area of circle

#include<stdio.h>
int main(){
float r,pi=3.14,a;
printf("Radius of Circle is ");
scanf("%f", &r);
a=pi*r*r;
printf("Value of Area of Circle=%.2f\n", a);
return 0;}