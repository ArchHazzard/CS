#include<stdio.h>
int main(){
float l,b,h,r,c,t;
printf("enter the value of l=");scanf("%f",&l);
printf("enter the value of b=");scanf("%f",&b);
printf("enter the value of h=");scanf("%f",&h);
r=l*b*h;c=6*l*l;t=h*b*0.5;
printf("Area of Rectangle=%f\n",r);
printf("Area of Triangle=%f\n",t);
printf("Area of Cube=%f\n",c);
return 0;}