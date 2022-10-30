#include <stdio.h>
int main(){
    int arreglo[12]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int aux;

    for(int i=0; i<12;i++){
        for(int j=0;j < 12;j++){

            if(arreglo[j]>arreglo[j+1]){

                aux= arreglo[j+1];
                arreglo[j+1]=arreglo[j];
                arreglo[j]= aux;
            }
        }
    }

    for(int i=0; i<12;i++){
        printf("%d\t",arreglo[i]);
    }

    return 0;
}
