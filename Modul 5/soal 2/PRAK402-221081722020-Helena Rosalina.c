#include <stdio.h>

int main (){
for (int i=1;i<=3;i++){

int i,j,nilai;
scanf("%d", &nilai);

for(i=1;i<=nilai;i++){
    if(i%2!=0){
    printf("%d",i);
    printf(" ", i);
}
}
printf("\n");
for(j=nilai;j>=1;j--){
    if (j%2==0){
    printf("%d",j);
    printf(" ", i);
    }

}
}
return 0;
}


