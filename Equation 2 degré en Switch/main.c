#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int a, b, c;
    char T;
    float delta;
    printf("************** Bienvenu Chez Le Programme le plus connu du Monde ********************\n ");
    printf("Tapez a :\n");
    scanf(" %d", &a);
    printf("Tapez b :\n");
    scanf(" %d", &b);
    printf("Tapez c :\n");
    scanf(" %d", &c);
    delta = pow(b, 2) - 4*a*c;
    printf(" Dans Ce Cas Delta = %f\n", delta);
    printf(" Tapez si delta negative - ou positive + ou null 0 : \n");
    scanf(" %s", &T);
    switch(T){
    case '+': printf(" x1 = %f et x2 = %f\n", (-b-sqrt(delta))/2*a, (-b+sqrt(delta))/2*a); break;
    case '0': printf(" x = %f\n", -b/(2*a)); break;
    case '-': printf("L'equation n'a pas de Solution\n"); break;
    default: printf("Error 404\n"); break; }

    printf("================== A la Prochaine =========================");



    return 0;
}
