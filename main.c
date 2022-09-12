#include <stdio.h>
#include <stdlib.h>

int main(){

  int N, d, S;
  S = 0;
  printf(" Tapez le nombre pour Traitter si il est parfait ou non: ");
  scanf("%d",&N);

  for(d=1; d<N; d++){
    if(N%d == 0){
      S = S + d;
    }
  }
  if(S == N)
    printf(" Le Nombre est Parfait");

  else
    printf(" Le nombre n'est pas Parfait");

  return 0;
}
