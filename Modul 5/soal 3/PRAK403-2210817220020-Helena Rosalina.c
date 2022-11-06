#include <stdio.h>
int main (){
int a,b,x,y;
for (int i=1;i<=4;i++){

printf("");
scanf("%d %d", &x, &y);
for(a=x, b=y; a<=y, b>=x; a++, b--){
    printf("%d %d ",a,b);
    printf(" - ");
    }
for(a=x, b=y; a>=y, b<=x; a--, b++){
    if(x<y){
        printf(" %d %d ",a,b);

    }
printf("-",a,b);
for(a=x, b=y; a>=y, b<=x; a--, b++){
    if(x>y){
    printf(" %d %d ",a,b);
    printf("-");
    }
}
}
}
}
