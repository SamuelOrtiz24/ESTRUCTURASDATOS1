#include <stdio.h>

int main()
{
    int tam = 100;

    char cadena[tam];

    printf("dame una cadena de caracteres(frase): ");
    scanf("%s",cadena);


    for(int i = 0; cadena[i]!='\0';i++){
        if(cadena[i]>= 65 && cadena[i]<90){
            //Mayuscula
            cadena[i] = cadena[i]+32;
        }else{
            //Minuscula
            cadena[i] = cadena[i]-32;
        }
    }

    printf("%s",cadena);
}
