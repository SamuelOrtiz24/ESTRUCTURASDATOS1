//AUTOR: SAMUEL DAVID ORTIZ RAMOS
//FECHA: 05/09/2022
//OBJETIVO: DETERMINAR QUE TIPO DE TRI�NGULO ES SEG�N LAS MEDIDAS ESTABLECIDAS

#include <stdio.h>
#include <locale.h>

int main(void) {
    //INVESTIGU� PARA QUE SERV�A EL LOCALE Y ME SIRVI� PARA PODER PONER ACENTROS EN LOS PRINTF
setlocale(LC_ALL,"");

//DEFINIR� 3 VARIABLES, LADO 1, LADO 2 Y LADO 3
float LADO1, LADO2, LADO3;
//SE PREGUNTAR� LA MEDIDA DE CADA LADO, CADA UNO SER� DE VALOR FLOTANTE

printf("Dime la medida del lado 1: ");
scanf("%f", &LADO1);

printf("Dime la medida del lado 2: ");
scanf("%f", &LADO2);

printf("Dime la medida del lado 3: ");
scanf("%f", &LADO3);

//A CONTINUACI�N, SE IR�N PONIENDO IF Y ELSE PARA VER LA COMPARACI�N DE TODOS LOS LADOS Y DETERMINAR QUE TIPO DE TRI�NGULO ES
//Tri�ngulo equil�tero: El tri�ngulo equil�tero es aquel que se caracteriza por tener todos los lados iguales.
//Tri�ngulo is�sceles: Los tri�ngulos is�sceles se caracterizan por tener dos lados iguales y uno diferente.
//Tri�ngulo escaleno: Un tri�ngulo escaleno es aquel que se caracteriza por tener todos sus lados y �ngulos desiguales.


//Ahora, se comparar�n todos los valores de los lados y de ah� saldr� que tipo de tri�ngulo es

if((LADO1==LADO2) && (LADO2==LADO3) && (LADO1==LADO3))
 printf("\n\nEl triangulo es: equilatero");
 else if((LADO1!=LADO2) && (LADO2!=LADO3) && (LADO1!=LADO3))
 printf("\n\nEl triangulo es: escaleno");
 else
 printf("\n\nEl triangulo es: isoceles");
return 0;

}

