//Write a C program to find the area of rectangle, cube and triangle 

#include<stdio.h>
int main(){
float l,b,h,r,c,t;
printf("enter the value of l=");scanf("%f",&l);
printf("enter the value of b=");scanf("%f",&b);
printf("enter the value of h=");scanf("%f",&h);
r=l*b;c=6*l*l;t=h*b*0.5;
printf("Area of Rectangle=%.2f\n",r);
printf("Area of Triangle=%.2f\n",t);
printf("Area of Cube=%.2f\n",c);
return 0;}