#include <stdio.h>
#include <stdlib.h>

int main()
{
    char L;
    printf(" Tapez la lettre pour le traittement : ");
    scanf("%s", &L);
    if (L == 'o' || L == 'O' || L == 'a' || L == 'A' || L == 'i' || L == 'I' || L == 'u' || L == 'U' || L == 'e' || L == 'E')
        printf("Voyelle");
    else
        printf("Consonne");

    return 0;
}
