#include<stdio.h>
#include<math.h>
#define Pi 3.1415
int main (){
//r=redius d=diameter c=circumference a=area
int r, d, c, a;
printf("Enter a circle Redius: ");
scanf("%d", &r);

d = 2 * r;
printf("The result Diameter is:%d\n", d);

c = 2 * Pi * r;
printf("The result Circumference is:%d\n", c);

a = Pi * (r, 2);
printf("The result of area is:%d\n", a);

return 0;
}