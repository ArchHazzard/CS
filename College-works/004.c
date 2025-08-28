#include<stdio.h>
int main(){
float p,r,n,i;
printf("enter the value of principal(in rupee)=");scanf("%f",&p);
printf("enter the value of rate(in percent)=");scanf("%f",&r);
printf("enter the value of time(in years)=");scanf("%f",&n);
i=p*r*n/100;
printf("value of simple interest(in rupee)=%f\n",i);return 0;}