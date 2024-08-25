#include<stdio.h>
int main(){
  int num1, num2;
  printf("Enter a Frist Number: ");
  scanf("%d", &num1);
  printf("Enter a Secound Number: ");
  scanf("%d", &num2);
  printf("\n Result:");
  // tow number add
  int sum = num1 + num2;
  printf ("\nsum of %d and %d is %d",num1,num2,sum);

 // tow number difference
  int difference = num1 - num2;
  printf("\n difference of %d and %d is %d", num1, num2, difference);

  // tow number multiplication
  int multiplication = num1 * num2;
  printf("\n multiplication of %d and %d is %d", num1, num2, multiplication);

  // tow number quotient
  int quotient = num1 / num2;
  printf("\n quotient of %d and %d is %d", num1, num2, quotient);

  // tow number modulus
  int modulus = num1 % num2;
  printf("\n modulus of %d and %d is %d" , num1, num2, modulus);
  return 0;
}
