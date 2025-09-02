//Write a C program to find out maximum and minimum number from given numbers

#include <stdio.h>
int main() {
 int n, i, min, max;
 printf("enter the size of array:");
 scanf("%d",&n);

 int a[n];
 printf("Enter element:");
 for (int i = 0; i < n; i++) {
 scanf("%d", &a[i]);
 }
 
 min = max = a[0];
 
 for (i = 1; i < n; i++) {
 if (a[i] < min)
 min = a[i];
 if (a[i] > max)
 max = a[i];
 }
 
 printf("Minimum of array is: %d\n", min);
 printf("Maximum of array is: %d\n", max);
 return 0;}