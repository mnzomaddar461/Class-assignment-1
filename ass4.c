#include<stdio.h>
int main (){

  float length, beradth, perimeter;
  printf("Enter a Rengtenguler length and berath number: ");
  scanf("%f%f", &length, &beradth);

  perimeter = length * beradth;
  printf("The Regtenguler area is:%.2f\n", perimeter);

  return 0;
}