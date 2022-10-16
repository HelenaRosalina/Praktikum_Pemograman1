#include <stdio.h>

int main()
{

int p1,p2,p3,k,h,biaya;
p1=4;
p2=5;
p3=7;
k=p1+p2+p3;
h=85000;
biaya=k*85000;

printf("Diketahui: \n");
printf("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", p1,p2,p3);
printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
printf("Harga tanah Per Meter adalah %d\n\n", h);
printf("Jawaban : \n ");
printf("Biaya yang diperlukan Pak Dengklek adalah Rp%d", biaya);

}

