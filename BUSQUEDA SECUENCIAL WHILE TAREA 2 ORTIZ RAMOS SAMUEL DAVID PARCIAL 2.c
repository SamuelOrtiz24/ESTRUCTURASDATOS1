#include <stdio.h>

int main(){

    int a[10] = {4,9,3,15,93,8,11,7,14,12};
    char band = 'F';
    int i=0, dato;

    printf("Dime el numero a buscar en el arreglo: ");
    scanf("%d", &dato);

    while ((band=='F')&&(i<10)){
        if (a[i]==dato){
            band = 'V';
        }
        i++;
    }

    if (band == 'F'){
        printf("El numero no existe en el arreglo\n");

    }else if (band == 'V')
    {
        printf("El numero si existe en el arreglo, se encuentra en la posicion: %i\n", i);
    }

    return 0;

}
