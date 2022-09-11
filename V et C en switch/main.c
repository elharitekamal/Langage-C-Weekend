#include <stdio.h>
#include <stdlib.h>

int main()
{   char L;
    printf("Tapez la lettre : ");
    scanf("%s", &L);
    switch(L){
    case'a':case'A':case'i':case'I':case'o':case'O':case'U':case'u': printf("Voyelle"); break;
    default: printf("Consonne"); break;}
    return 0;

}
