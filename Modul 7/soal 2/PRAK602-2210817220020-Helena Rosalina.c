#include <stdio.h>
int main()
{

int baris, a, isi;
scanf("%d", &baris);
int bilangan[baris];
for (a=0;a<baris;a++){
    scanf("%d",&isi);
    bilangan[a] = isi ;
}
printf("\n");
for(a=0;a<baris;a++){
    printf("%d ", bilangan [a]*(a+1));
}
return 0;
}
