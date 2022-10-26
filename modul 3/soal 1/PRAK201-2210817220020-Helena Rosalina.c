#include <stdio.h>
int main ()
{
char nama[22],nim[22],kp[22],ttl[22],alamat[22],hobby[22],nohp[22];
printf("Nama                 : ");
gets(&nama);
printf("NIM                  : ");
gets(&nim);
printf("Kelas Paralel        : ");
gets(&kp);
printf("Tempat/Tanggal Lahir : ");
gets(&ttl);
printf("Alamat               : ");
gets(&alamat);
printf("Hobby                : ");
gets(&hobby);
printf("No. Hp               : ");
gets(&nohp);

printf("\nNama                 :%s \n",&nama);
printf("NIM                  :%s \n",&nim);
printf("Kelas Paralel        :%s \n",&kp);
printf("Tempat/Tanggal Lahir :%s \n",&ttl);
printf("Alamat               :%s \n",&alamat);
printf("Hobby                :%s \n",&hobby);
printf("No. Hp               :%s \n",&nohp);
}
