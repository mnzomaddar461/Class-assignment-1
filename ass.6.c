#include<stdio.h>
int main(){
  float cm,meter,km;
  printf("Enter a cm number: ");
  scanf("%f", &cm);

  meter = cm / 100;
  printf("Cm to Meter:%.2f\n", meter);

  km = cm / 100000;
  printf("CM to KM is: %.3f\n", km);

  return 0;
}