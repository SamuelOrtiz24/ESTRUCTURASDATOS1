#include <stdio.h>

//0 1 1 2 3 5 8 13 21 34 55.....

void fibonacci(int penultimo, int ultimo, int n){
    int actual;

    printf("%d " , ultimo );
    if(n>1){
         actual = penultimo + ultimo;
         n--;
         fibonacci(ultimo, actual, n);
    }
}

int main(int argc, char *argv[])
{
    //PENÚLTIMO = 0, ÚLTIMO = 1, N = LO QUE EL USUARIO DECIDA, EN ESTE CASO SERÁN A MODO DE PRUEBA 4, 7, 10
    fibonacci(0, 1, 10);
    return 0;
}
