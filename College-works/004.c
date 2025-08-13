#include<stdio.h>
int main(){
int p,r,n;float i;
printf("enter the value of principal(in rupee)=");scanf("%d",&p);
printf("enter the value of rate(in percent)=");scanf("%d",&r);
printf("enter the value of time(in years)=");scanf("%d",&n);
i=p*r*n/100;
printf("value of simple interest(in rupee)=%f\n",i);return 0;}