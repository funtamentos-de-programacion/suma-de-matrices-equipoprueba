#include <stdio.h>
#define TAM 100

int main(){
  int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];
  int m, n, p, q;
  int i, j;

  do{
    printf("Ingresa las dimensiones de la primer matriz\n");
    scanf("%d %d", &m, &n);
    printf("Ingresa las dimensiones de la segunda matriz\n");
    scanf("%d %d", &p, &q);
  }while(m!=p || n!=q || m <=0 || n<=0 || p <= 0 ||  q <=0);

  printf("Ingresa los datos de la matriz A\n");
  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      scanf("%d", &a[i][j]);
    }
  }
  printf("La matriz A es\n");
  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      printf("%d\t ", a[i][j]);
    }
    printf("\n");
  }
  printf("Ingresa los datos de la matriz B\n");
  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      scanf("%d", &b[i][j]);
    }
  }
  printf("La matriz B es\n");
  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      printf("%d\t ", b[i][j]);
    }
    printf("\n");
  }

  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      c[i][j] = a[i][j]+b[i][j];
    }
  }

  printf("La matriz resultante es\n");
  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
      printf("%d\t ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
