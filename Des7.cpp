#include <stdio.h>

float mediaVetor(float vet[], int tam){
  float media, soma = 0;
  int i;

  for(i =0; i<tam; i++){
    soma += vet[i];
  }
  media = soma/tam;

  return media;
}

int main(){
  float vetor[4] = {1,4,3,2};
  float resultado;

  resultado = mediaVetor(vetor, 4);
  printf("A media dos vetores e de %.2f\n", resultado);
}
