#include<stdio.h>
int main (){
// logical condition 
  int a, b, c;
  printf("Enter 3 number: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a>=b && a>=c)
  {
    printf("Big Number is A:%d\n",a);
  }
  else if (b>=a && b>=c)
  {
    printf("Big Number is B:%d\n", b);
  }
  else
  {
    printf("Big Number is C:%d\n", c);
  }
  
  return 0;
}