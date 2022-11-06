#include <stdio.h>
int main () {

 int a,b,c,d,i,j,k,l,x,y,z;

 for(a=1; a<=3; a++){
        scanf("%d %d",&b,&c);
 for(d=1; d<=b; d++){
     for(i=d; i>0; i--){
 printf("(%d*%d) +",i,c);
 }
        for(j=1,l=j*c; j<d; j++, l=l+(j*c)){

        }
 printf("(%d*%d) = %d\n", i,c,l);
 }
 for(x=1, y=1, z=0; x<=b; y=j+(x+x), x++)
 z=z+(y*c);
}
 printf("%d", z);

}

