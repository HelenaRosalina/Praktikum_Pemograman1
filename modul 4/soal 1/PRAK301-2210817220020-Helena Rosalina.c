#include <stdio.h>

int main ()
{

int x,y,pertama,kedua;
printf(" ");
scanf("%i", &x);
printf(" ");
scanf("%i", &y);

if (x<y) {

        pertama=x;
        kedua=y;

}
else if (y<x) {

        pertama=y;
        kedua=x;
}

    printf("%i %i",pertama,kedua);
    return 0;
}
