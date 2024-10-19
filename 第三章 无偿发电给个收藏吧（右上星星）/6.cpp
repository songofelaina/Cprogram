#include<stdio.h>
#include<math.h>
int main()
{
float r,h,c,s,S,v,V,pi;
pi=3.14; 
scanf("%f",&r);
scanf("%f",&h);
c=pi*2*r;
s=pi*r*r;
S=4*pi*r*r;
V=4/3*pi*r*r*r;
v=r*r*pi*h;
printf("·Ö±ðÊÇ\n%.2f\n",c);
printf("%.2f\n",s);
printf("%.2f\n",S);
printf("%.2f\n",V);
printf("%.2f\n",v);
return 0;
}
