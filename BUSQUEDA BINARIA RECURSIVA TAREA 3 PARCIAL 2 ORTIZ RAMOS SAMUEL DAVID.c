#include <stdio.h>

int busquedabinaria(int nums[], int inf, int sup, int dato)
{
    if (inf > sup) {
        return -1;
    }

    int med = (inf + sup)/2;

    if (dato == nums[med]) {
        return med;
    }

    else if (dato < nums[med]) {
        return busquedabinaria(nums, inf, med - 1, dato);
    }

    else {
        return busquedabinaria(nums, med + 1, sup, dato);
    }
}

int main(void)
{
    int nums[] = {4,20,38,45,67,88,110,137,149,182};
    int dato;
    printf("Dame el valor a buscar: ");
    scanf("%d", &dato);

    int n = sizeof(nums)/sizeof(nums[0]);

    int inf = 0, sup = n - 1;
    int pos = busquedabinaria(nums, inf, sup, dato);

    if (pos != -1) {
        printf("Elemento encontrado en la posicion %d", pos);
    }
    else {
        printf("El numero no esta en el arreglo ");
    }

    return 0;
}
