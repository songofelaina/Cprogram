#include<stdio.h>

#include<math.h>

int main()

{

float r,p;

r=0.07;

p=pow(1+r,10);

printf("%f%%\n",100*p,100*p-100);

return 0;

}
