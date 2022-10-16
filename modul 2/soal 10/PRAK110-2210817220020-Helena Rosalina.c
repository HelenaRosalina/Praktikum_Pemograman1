#include <stdio.h>

int main()
{

int a,t,sA,sB,sC,k,l;
a=5;
t=12;
sA=t;
sB= sqrt ((a*a) + (t*t));
sC=a;
k=sA+sB+sC;
l=a*t/2;

printf("Diketahui : \n");
printf("Alas = %d cm \n", a);
printf("Tinggi = %d cm \n\n\n", t);
printf("Jawab : \n");
printf("sisi A = %d cm \n", sA);
printf ("sisi B = %d cm \n",sB);
printf("sisi C = %d cm \n", sC);
printf("Keliling = %d cm \n", k);
printf ("Luas = %d cm \n", l);

}


