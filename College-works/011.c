#include<stdio.h>
int main(){
float num;
printf("enter any number:");scanf("%f",&num);
if(num==0) printf("number is neither positive nor negative\n");
else if (num<0) printf("number is negative\n");
else printf("number is positive\n");
return 0;}
