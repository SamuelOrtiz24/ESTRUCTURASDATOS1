//AUTOR: SAMUEL DAVID ORTIZ RAMOS
//FECHA: 05/09/2022
//OBJETIVO: QUE EL USUARIO SEA SALUDADO DE DIFERENTE MANERA SEG�N LA HORA QUE SE INDIQUE

#include <stdio.h>
#include <locale.h>

int main(void) {
    //INVESTIGU� PARA QUE SERV�A EL LOCALE Y ME SIRVI� PARA PODER PONER ACENTROS EN LOS PRINTF
setlocale(LC_ALL,"");

//SOLO DEFINIR� 2 VARIABLES, HORAS Y MINUTOS INDICADOS POR EL USUARIO
int Hrs, Min;

//Se deber� decir la hora en formato de 24 horas

printf("Dime la hora: ");
scanf("%d", &Hrs);
printf("Dime los minutos: ");
scanf("%d", &Min);

//A CONTINUACI�N, SE IR�N PONIENDO IF Y ELSE PARA COMPARAR SI ES D�A, TARDE O NOCHE, Y SI NO ES NINGUNO, LA HORA ES INVALIDA

if(Hrs >= 0 && Hrs < 12 && Min >= 0 && Min < 60){
printf("\nHola, buenos d�as");
} else {
if(Hrs >= 12 && Hrs < 18 && Min >= 0 && Min < 60){
printf("\nHola, buenas tardes");
} else {
if(Hrs >= 18 && Hrs < 24 && Min >= 0 && Min < 60){
printf("\nHola, buenas noches");
} else {
printf("\nLa hora y/o minutos ingresados son invalidos");
}
}


}

return 0;


}
