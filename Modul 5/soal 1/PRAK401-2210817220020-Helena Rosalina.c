#include <stdio.h>

int main(){
for (int i=1;i<=3;i++){

int i,nilai,simbol;
    scanf("%d %c",&nilai,&simbol);
for(i=1;i<=50;i++){
    printf(" ");

    if(i%nilai !=0){
        printf("%d", i);
    }
    if (i%nilai==0){
        printf("%c",simbol);
}
}
}
return 0;
}

