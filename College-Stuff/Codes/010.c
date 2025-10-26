//Write a C program to find the biggest number from given three numbers

#include<stdio.h>
int main(){
float a,b,c;
printf("enter three numbers:\n");
printf("a:");scanf("%f",&a);
printf("b:");scanf("%f",&b);
printf("c:");scanf("%f",&c);
if (a>b&&a>c)
printf("biggest number is %f\n",a);
else if (b>a&&b>c)
printf("biggest number is %f\n",b);
else
printf("biggest number is %f\n",c);
return 0;}
