#include <stdio.h>

void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}

void seleccion(int arreglo[], int longitud) {
  for (int i = 0; i < longitud - 1; i++) {
    for (int j = i + 1; j < longitud; j++) {

      if (arreglo[i] > arreglo[j]) {

        intercambiar(&arreglo[i], &arreglo[j]);
      }
    }
  }
}

int main(void) {

  int arreglo[] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
  /*
  Calcular la longitud:
  */
  int longitud = sizeof arreglo / sizeof arreglo[0];

  printf("Arreglo inicial...\n");
  for (int x = 0; x < longitud; x++) {
    printf("%d ", arreglo[x]);
  }

  printf("\n");


	seleccion(arreglo, longitud);

  printf("Arreglo final (ya ordenado)...\n");
  for (int x = 0; x < longitud; x++)
    printf("%d ", arreglo[x]);
  return 0;
}
