#include <stdio.h>
int main()
{

int x[10][10], y[10][10], z[10][10], d, e, f, g, j;
j = 0;
scanf("%d", &g);
printf("Matriks A\n");
    for(d=0; d<g; d++){
        for(e=0; e<g; e++){
        scanf("%d", &x[d][e]);
        }
    }
    printf("Matriks B\n");
    for(d=0; d<g; d++){
        for(e=0; e<g; e++){
        scanf("%d", &y[d][e]);
        }
    }
    for(d=0; d<g; d++){
        for(e=0; e<g; e++){
            for(f=0; f<g; f++){
                j = j + x[d][f] * y[f][e];
            }
        z[d][e] = j;
        j = 0;
        }
    }
printf("\nMatriks AXB\n");
for(d=0; d<g; d++){
     for(e=0; e<g; e++){
        printf("%d ", z[d][e]);}
printf("\n");
}

return 0;
}
