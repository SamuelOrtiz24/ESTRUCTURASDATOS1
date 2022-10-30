#include <stdio.h>
#include <stdlib.h>

int BusquedaBinaria(int arreglo[], int n, int dato);

int main(int argc, char *arga[]){
int arreglo[]={4,20,38,45,67,88,110,137,149,182};
int n=10;
int dato,resu;
printf("Dame el valor a buscar en el arreglo: ");
scanf("%d", &dato);
resu=BusquedaBinaria(arreglo, n, dato);
if (resu!=-1){
    printf("El valor %d si esta, se encuentra en la posicion %d del arreglo\n",dato, resu);
}
else{
    printf("El valor buscado %d no se encuentra en el arreglo \n", dato);
}

return 0;

}

int BusquedaBinaria(int arreglo[], int n, int dato){
int sup, inf, centro;
inf=0;
sup=n-1;
while (inf<=sup){
    centro=((sup-inf)/2)+inf;
    if(dato==arreglo[centro]){
        return centro;
    }
    if (dato<arreglo[centro]){
        sup=centro-1;
    }
    else{
        inf=centro+1;
    }
}
return -1;
}

