#include<stdio.h>
//28/09/2022
//ORTIZ RAMOS SAMUEL DAVID


void main()
{
    int numerocasillas = 10;
    for (int r = 1; r <= numerocasillas; r++) {
        for (int c = 1; c <= numerocasillas; c++) {
            if (r == 1 || r == numerocasillas || c == 1 || c == numerocasillas){
                printf("1  ");
            }else{
                printf("0  ");
            }
        }

        printf("\n");
    }
}

