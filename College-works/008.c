#include<stdio.h>
int main(){
float num1,num2,sum,sub,mult,div;
printf("input any two numbers separated by comma:");
scanf("%f,%f",&num1,&num2);
sum=num1+num2;sub=num1-num2;mult=num1*num2;div=num1/num2;
printf("sum of given numbers:%.2f\n",sum);
printf("difference of given numbers:%.2f\n",sub);
printf("multiplication of given numbers:%.2f\n",mult);
printf("division of given numbers:%.2f\n",div);
return 0;}
