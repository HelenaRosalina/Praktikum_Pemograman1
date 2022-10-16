#include <stdio.h>

int main ()
{

float sepatuA,sepatuB,diskonA,diskonB,hargaA,hargaB;
char a= '%';
sepatuA=400000;
sepatuB=350000;
diskonA=400000*13/100;
diskonB=350000*21/100;
hargaA= 400000-diskonA;
hargaB= 350000-diskonB;

printf("harga sepatu A adalah %.0f\n", sepatuA);
printf("harga sepatu B adalah %.0f\n", sepatuB);
printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.0f\n", a,hargaA);
printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.0f\n", a,hargaB);

}
