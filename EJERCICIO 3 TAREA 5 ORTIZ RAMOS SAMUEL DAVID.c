//AUTOR: SAMUEL DAVID ORTIZ RAMOS
//FECHA: 05/09/2022
//OBJETIVO: DETERMINAR QUE TIPO DE TRIÁNGULO ES SEGÚN LAS MEDIDAS ESTABLECIDAS

#include <stdio.h>
#include <locale.h>

int main(void) {
    //INVESTIGUÉ PARA QUE SERVÍA EL LOCALE Y ME SIRVIÓ PARA PODER PONER ACENTROS EN LOS PRINTF
setlocale(LC_ALL,"");

//DEFINIRÉ 3 VARIABLES, LADO 1, LADO 2 Y LADO 3
float LADO1, LADO2, LADO3;
//SE PREGUNTARÁ LA MEDIDA DE CADA LADO, CADA UNO SERÁ DE VALOR FLOTANTE

printf("Dime la medida del lado 1: ");
scanf("%f", &LADO1);

printf("Dime la medida del lado 2: ");
scanf("%f", &LADO2);

printf("Dime la medida del lado 3: ");
scanf("%f", &LADO3);

//A CONTINUACIÓN, SE IRÁN PONIENDO IF Y ELSE PARA VER LA COMPARACIÓN DE TODOS LOS LADOS Y DETERMINAR QUE TIPO DE TRIÁNGULO ES
//Triángulo equilátero: El triángulo equilátero es aquel que se caracteriza por tener todos los lados iguales.
//Triángulo isósceles: Los triángulos isósceles se caracterizan por tener dos lados iguales y uno diferente.
//Triángulo escaleno: Un triángulo escaleno es aquel que se caracteriza por tener todos sus lados y ángulos desiguales.


//Ahora, se compararán todos los valores de los lados y de ahí saldrá que tipo de triángulo es

if((LADO1==LADO2) && (LADO2==LADO3) && (LADO1==LADO3))
 printf("\n\nEl triangulo es: equilatero");
 else if((LADO1!=LADO2) && (LADO2!=LADO3) && (LADO1!=LADO3))
 printf("\n\nEl triangulo es: escaleno");
 else
 printf("\n\nEl triangulo es: isoceles");
return 0;

}

