#include <stdio.h>

int main()
{

int a;
    printf(" ");
    scanf("%d", &a);

    if ( a>0 && a<10) {
        printf("satuan");
    }
    else if ( a==0){
        printf("nol");
    }
    else if ( a>10 && a<20){
        printf("belasan");
    }
    else if (a>19 && a<100 || a==10){
        printf("puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}
