#include <stdio.h>
#include <stdlib.h>

void soma(int *v1, int *v2, int *vs, int ne){

  int i = 0, n;

  for(i = 0; i<n; i++){
    vs[i] = v1[i] + v2[i];
  }
  }

int main(void) {
  int tam;
  int i = 0, y = 0, a = 0;
  int *vetor1,*vetor2, *vetorsoma;

  printf("Tamanho do vetor: ");
  scanf("%d",&tam);

  vetor1 = malloc(tam*sizeof(int));
  vetor2 = malloc(tam*sizeof(int));
  vetorsoma = malloc(tam*sizeof(int));
  
  // la�o para gerar valores aleat�rios para os vetores
  for (i = 0; i<tam; i++){
    vetor1[i] = rand() % 50;
    vetor2[i] = rand() % 50;
  }

  printf("Vetor 1:\n");
  for (y =0; y<tam; y++){
    printf("vetor 1[%d] = %d\n", y,vetor1[y]); 
  }

  printf("\nVetor 2:\n");
  for (y =0; y<tam; y++){
    printf("vetor 2[%d] = %d\n", y,vetor2[y]); 
  }
  
  soma(vetor1,vetor2,vetorsoma,tam);
  
  printf("\nVetor soma:\n");
  for (a =0; a<tam; a++){
  printf("vetorsoma[%d] = %d \n",a,vetorsoma[a]);
  }

  free(vetorsoma);
  free(vetor2);
  free(vetor1);
  return 0;
}
