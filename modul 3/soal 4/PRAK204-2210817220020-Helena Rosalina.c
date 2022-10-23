#include <stdio.h>

int main ()
{

float phi,r,t,v,l,k;
phi=3.142857;

scanf("%f %f", &r, &t);
v=phi*r*r*t;
printf("Volume = %.2f \n", v);
l=2*phi*r*(r+t);
printf("Luas = %.2f \n", l);
k=2*phi*r;
printf("Keliling = %.2f \n", k);

}
