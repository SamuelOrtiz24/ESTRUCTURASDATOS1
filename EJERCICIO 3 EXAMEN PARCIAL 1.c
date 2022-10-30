
/*
Realice un programa en C que lea un arreglo de enteros N x M,
calcule un arreglo N x M con la suma de los vecinos de cada
número en la matriz incluyendo al mismo número y lo imprima
*/

#include <stdio.h>
#include <stdlib.h>

#define N  3
#define M 4

void llenaArreglo(int arreglo1[N][M]);
void sumaVecinos(int arreglo1[N][M], int arreglo2[N][M]);
void imprimeArreglo(int arreglo2[N][M]);

int main()
{
    int arreglo1[N][M], arreglo2[N][M];

    llenaArreglo(arreglo1);
    sumaVecinos(arreglo1, arreglo2);
    imprimeArreglo(arreglo2);
}

void imprimeArreglo(int arreglo2[N][M]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			printf(" %d ", arreglo2[i][j]);
		}
		printf("\n");
	}
}

void sumaVecinos(int arreglo1[N][M], int arreglo2[N][M]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(i == 0){
				if(j == 0){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i+1][j] + arreglo1[i][j+1];
				}
				else if(j > 0 && j < (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i][j-1] + arreglo1[i+1][j] + arreglo1[i][j+1];
				}
				else if(j == (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i+1][j] + arreglo1[i][j-1];
				}
			}
			else if(i > 0 && i < (N-1)){
				if(j == 0){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i+1][j] + arreglo1[i][j+1] + arreglo1[i-1][j];
				}
				else if(j > 0 && j < (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i][j-1] + arreglo1[i+1][j] + arreglo1[i][j+1] + arreglo1[i-1][j];
				}
				else if(j == (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i][j-1] + arreglo1[i+1][j] + arreglo1[i-1][j];
				}
			}
			else if(i == (N-1)){
				if(j == 0){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i-1][j] + arreglo1[i][j+1];
				}
				else if(j > 0 && j < (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i][j-1] + arreglo1[i-1][j] + arreglo1[i][j+1];
				}
				else if(j == (M-1)){
					arreglo2[i][j] = arreglo1[i][j] + arreglo1[i][j-1] + arreglo1[i-1][j];
				}
			}
		}
	}
}

void llenaArreglo(int arreglo1[N][M]){
	int cont = 1;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			arreglo1[i][j] = cont;
			cont++;
			printf(" %d ", arreglo1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
