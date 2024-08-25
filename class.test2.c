#include<stdio.h>
int main (){

  int ly;
  printf("Enter A Year: ");
  scanf("%d", &ly);
  if (ly%400==0)
  {
    printf("Leap Year %d\n",ly);
  }
  else if (ly%4==0 &&ly%100!=0)
  {
    printf("Leap Year %d\n",ly);
  }
  else
  {
    printf("not Leap Year %d\n",ly);
  }
  
  return 0;
}