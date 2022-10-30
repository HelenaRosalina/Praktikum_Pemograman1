#include <stdio.h>

int main(){

int hari,jam,menit,detik,td;
    printf(" ");
    scanf("%d", &td);

hari=td%(86400*30)/86400;
jam=td%86400/3600;
menit=td%3600/60;
detik=td%60;

if (hari>0){
    printf(" %d hari %.2d:%.2d:%.2d ", hari,jam,menit,detik);
    }

else  {
    printf("%.2d:%.2d:%.2d",jam,menit,detik);
    }

    return 0;
}
