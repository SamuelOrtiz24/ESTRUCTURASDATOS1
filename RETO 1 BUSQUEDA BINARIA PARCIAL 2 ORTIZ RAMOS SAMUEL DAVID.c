#include <stdio.h>
#define L 4

void capturaDatos(int *arreglo);
int EncuentraObjetivo(int *arreglo);

int main()
{
    int arreglo[L];
    int indice;

    capturaDatos(arreglo);
    indice = EncuentraObjetivo(arreglo);
    printf("%d", indice);
    return 0;
}
void capturaDatos(int *arreglo)
{
    for(int i = 0; i < L; i++) {
        printf("Ingresa un numero entero para la posicion %d (En orden): ", i);
        scanf("%d", &arreglo[i]);
    }
    printf("\n[");
    for(int j = 0; j < L; j++){
        printf(" %d ", arreglo[j]);
    }
    printf("]\n");
}

int EncuentraObjetivo(int *arreglo)
{
    int objetivo;
    int indice;
    printf("Ingresa el numero deseado a buscar: ");
    scanf("%d",&objetivo);

    for(int i=0; i<L; i++){
        if (i==0 && objetivo < arreglo[i]){
            indice=i;
        }
        if (i==L-1 && objetivo > arreglo[i]){
            indice=L;
        }
        if(arreglo[i] == objetivo){
            indice = i;
        }
        if (objetivo > arreglo[i-1] && objetivo < arreglo[i+1]){
            indice = i;
        }
    }
    return indice;
}
