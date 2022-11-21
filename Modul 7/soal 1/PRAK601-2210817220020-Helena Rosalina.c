#include <stdio.h>

int main ()
{

int baris,kolom,a,b,isi;
scanf("%d %d", &baris,&kolom);
int bilangan[baris][kolom] ;
for (a=0;a<baris;a++){
    for (b=0;b<kolom;b++){
        scanf("%d", &isi);
        bilangan[a][b] = isi;
        }
    }
printf("\n");
for (a=0;a<baris;a++){
    for (b=0;b<kolom;b++){
        printf("%d ",bilangan [a][b]);
        }
    printf("\n");
    }
return 0;
}
