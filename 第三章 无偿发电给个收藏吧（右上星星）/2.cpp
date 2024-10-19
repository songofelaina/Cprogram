#include<stdio.h>

#include<math.h>

int main()

{

float r1=0.015,r2=0.021,r3=0.0275,r4=0.03,r5=0.0035,a=1000,b1,b2,b3,b4,b5;

b1=a*(1+5*r4);

b2=a*(1+2*r2)*(1+3*r3);

b3=a*(1+3*r3)*(1+2*r2);

b4=a*pow(1+r1,5);

b5=a*pow(1+r5,20);

printf("(1)%f\n(2)%f\n(3)%f\n(4)%f\n(5)%f\n",b1,b2,b3,b4,b5);

return 0;

}
