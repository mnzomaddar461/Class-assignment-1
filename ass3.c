#include<stdio.h>
int main(){

  int length, breadth,perimeter;
  printf("Enter langth number and beardth number:  ");
  scanf("%d%d", &length, &breadth);

  perimeter = 2 * (length + breadth);
  printf("The Perimeter a Regtengular is: %d", perimeter);

  return 0;
}