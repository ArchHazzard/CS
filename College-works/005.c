#include<stdio.h>
int main(){
float km,m,feet,inch,cm;
printf("enter the distance b/w 2 cities(in km):");scanf("%f",&km);
m=km*1000;
feet=km*3280.84;
inch=km*39370.1;
cm=km*100000;
printf("distance in kilometres=%.2f km\n",km);
printf("distance in metres=%.2f m\n",m);
printf("distance in feet=%.2f ft\n",feet);
printf("distance in inches=%.2f in\n",inch);
printf("distance in centimetres=%.2f cm\n",cm);
return 0;}