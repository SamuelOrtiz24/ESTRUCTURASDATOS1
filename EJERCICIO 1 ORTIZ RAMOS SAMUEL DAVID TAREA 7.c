#include <stdio.h>
#define n 100

void IntroduceCadena(char *S);
void IntroduceCaracter(char *C);
int imprimeNumeroVeces(char *cadenac, char caracter);

int main()
{
    char S[n];
    char C;
    int numeroVecescaracter;

    IntroduceCadena(S);
    IntroduceCaracter(&C);
    numeroVecescaracter = imprimeNumeroVeces(S,C);

    printf("La letra %c aparece en %d ocasiones en la cadena de caracteres",C,numeroVecescaracter);

    return 0;
}
void IntroduceCaracter(char *C)
{
    printf("Ingresa un caracter: ");
    scanf(" %s", C);
}

void IntroduceCadena(char *S)
{

    printf("Ingresa una cadena de caracteres: ");
    gets(S);
}
int imprimeNumeroVeces(char *cadenac, char caracter)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (cadenac[i] == caracter)
        {
            cont++;
        }
    }
    return cont;
}
