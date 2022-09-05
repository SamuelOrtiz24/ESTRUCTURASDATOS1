//AUTOR: SAMUEL DAVID ORTIZ RAMOS
//FECHA: 05/09/2022
//OBJETIVO: VERIFICAR SI HAY DESCUENTO EN KILOS DE MANZANA, SI NO HAY, PRECIO ORIGINAL, SI HAY, DESCONTAR PARTE DEL PRECIO

#include <stdio.h>
#include <locale.h>

int main(void) {
    //INVESTIGUÉ PARA QUE SERVÍA EL LOCALE Y ME SIRVIÓ PARA PODER PONER ACENTROS EN LOS PRINTF
setlocale(LC_ALL,"");

//DEFINIRÉ VARIAS VARIABLES, KILOS, DESCUENTO, Y COSTOS RESPECTIVAMENTE, TODOS ELLOS INDICADOS POR EL USUARIO
float Kgs, Desc=0, Desc1=0, CostFinal=0, CostFinal2=0, CostFinalX=0;
int Cost=50;

//Para este caso, supondremos que cada kilo de manzanas está a $50

printf("Dime cuántos kilos de manzana compraste: ");
scanf("%f", &Kgs);

//0-2kgs 0%descuento
//2.01-5kgs 10%descuento
//5.01-10kgs 15%descuento
//+10.01kgs 20%descuento

//A CONTINUACIÓN, SE IRÁN PONIENDO IF Y ELSE PARA VER SI SE APLICA O NO UN DESCUENTO SEGÚN LOS KILOS COMPRADOS
if(Kgs >= 0 && Kgs <= 2){
Desc=0;
CostFinal = Kgs * Cost;
printf("El costo final sin descuento es de: %.2f", CostFinal);
} else {
if(Kgs >= 2.01 && Kgs <= 5){
Desc=0.10;
CostFinal = Kgs * Cost;
CostFinal2 = CostFinal;
Desc1 = CostFinal * Desc;
CostFinalX = CostFinal2 - Desc1;
printf("El costo final con el descuento es de: %.2f", CostFinalX);
} else {
if(Kgs >= 5.01 && Kgs <= 10){
Desc=0.15;
CostFinal = Kgs * Cost;
CostFinal2 = CostFinal;
Desc1 = CostFinal * Desc;
CostFinalX = CostFinal2 - Desc1;
printf("El costo final con el descuento es de: %.2f", CostFinalX);
} else {
if(Kgs >= 10.01){
Desc=0.20;
CostFinal = Kgs * Cost;
CostFinal2 = CostFinal;
Desc1 = CostFinal * Desc;
CostFinalX = CostFinal2 - Desc1;
printf("El costo final con el descuento es de: %.2f", CostFinalX);
}


}

return 0;
}
}
}
