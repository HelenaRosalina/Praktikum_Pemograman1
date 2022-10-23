#include <stdio.h>

int main ()
{

int a,b,alas,t,k,l;

scanf("%d %d", &a,&b);
alas=sqrt ((b*b) - (a*a));
printf("alas = %d cm \n", alas);
t=a;
printf("tinggi= %d cm \n", t);
k=a+b+alas;
printf("keliling= %d cm \n", k);
l=(alas*a)/2;
printf("luas = %d cm^2 ", l);

}
