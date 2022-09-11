#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, L;
    int o, C;
    printf("Tapez le nombre des lignes voulus : \n");
    scanf("%d", &L);
    printf("Tapez le nombre des colones voulus : \n");
    scanf("%d", &C);
    for(i=1; i<=L; i++){
        for (o=1; o<=C; o++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
