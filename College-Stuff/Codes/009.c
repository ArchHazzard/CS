//Write a C program to find out the largest value from given three numbers using conditional operator 

#include<stdio.h>
int main(){
float a,b,c,big;
printf("enter three numbers:");scanf("%f%f%f",&a,&b,&c);
big=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("biggest number is:%f\n",big);
return 0;}
