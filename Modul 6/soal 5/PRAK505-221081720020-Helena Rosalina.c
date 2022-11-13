#include <stdio.h>
void Biodata(int tahun,char nama[25],char asal [30]){
int tahun_sekarang = 2020;

printf("Perkenalkan Nama Saya : %s \n",nama);
printf("Umur saya : %d \n",tahun_sekarang-tahun);
printf("Saya adalah angkatan : %d \n",tahun_sekarang);
printf("Asal saya dari : %s \n",asal);
}

int main() {
int tahunLahir;
char nama[25], asal[30];
scanf(" %d \n",&tahunLahir);
scanf(" %[^\n]%*c",&nama);
scanf(" %[^\n]%*c",&asal);
Biodata(tahunLahir, nama, asal);
return 0;
}
