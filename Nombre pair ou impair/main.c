#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float S;
    printf(" Saisir le nombre : \n");
    scanf("%d", &N);
    S = N%2;
    if (S == 0)
        printf("Le Nombre est Pair");
    else
        printf("Le Nombre est Impair ")

    return 0;
}
