//Write a C program to interchange two numbers

#include<stdio.h>
int main(){
float a,b,temp;
printf("enter a:");scanf("%f",&a);
printf("enter b:");scanf("%f",&b);
temp=a;a=b;b=temp;
printf("after swapping,a=%f\n",a);
printf("after swapping,b=%f\n",b);
return 0;}
