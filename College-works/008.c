//Write a C program for summation, subtraction, multiplication, and divison of two numbers using arithmetic operator

#include<stdio.h>
int main(){
float num1,num2,sum,sub,mult,div;
printf("input any two numbers separated by comma:");
scanf("%f,%f",&num1,&num2);
sum=num1+num2;sub=num1-num2;mult=num1*num2;div=num1/num2;
printf("Summation of given numbers:%.2f\n",sum);
printf("Subtraction of given numbers:%.2f\n",sub);
printf("Multiplication of given numbers:%.2f\n",mult);
printf("Division of given numbers:%.2f\n",div);
return 0;}
