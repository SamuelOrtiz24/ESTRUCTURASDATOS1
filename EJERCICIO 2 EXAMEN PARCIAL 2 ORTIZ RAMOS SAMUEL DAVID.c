#include <stdio.h>
void ordenacion(int n, int a[]);
void imprimir(int n,int a[]);
void Intercambio( int *b, int *c);

int main() {

//AQUI SE LE PEDIRÁ AL USUARIO QUE DEFINA EL TAMAÑO DE SU ARREGLO Y QUE POSTERIOR A ELLO PONGA LOS VALORES EN CUALQUIER ORDEN
    int n;
    printf("Ingresa el tamanio del arreglo: \n");
    scanf("%d", &n);
    printf("Dame los valores requeridos segun el tamanio de tu arreglo: \n ");
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ordenacion(n,a);

    imprimir(n,a);
}
//ACÁ SE COMPARARÁN LOS VALORES Y SE HARÁ UN INTERCAMBIO
void ordenacion(int n,int a[])
{
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                Intercambio(&a[j],&a[j+1]);
            }
        }
    }
}
void Intercambio( int *b, int *c)
{
    int aux;

    aux = *b;
    *b = *c;
    *c = aux;
}
//FINALMENTE ACÁ SE MOSTRARÁ EL ARREGLO YA ORDENADO
void imprimir(int n,int a[]) {

    printf("El arreglo ya ordenado en forma descendente queda de la siguiente forma: ");

    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }

}
