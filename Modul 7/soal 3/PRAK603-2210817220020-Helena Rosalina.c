#include <stdio.h>
int main()
{

int baris1,baris2,i,isi,hasil;
scanf("%d %d", &baris1, &baris2);
int bilangan1[baris1],bilangan2[baris2];
    if (baris1==baris2){
        for(i=0;i<baris1;i++){
        scanf("%d", &isi);
        bilangan1[i] = isi ;
        }
        for(i=0;i<baris2;i++){
        scanf("%d", &isi);
        bilangan2[i] = isi ;
        }
printf("\n");
        for(i=0;i<baris1;i++){
        hasil=bilangan1[i] * bilangan2[i];
        printf("%d ", hasil);
        }
    }
    else{
    printf("Jumlah Tidak Sama");
    }
return 0;
}
