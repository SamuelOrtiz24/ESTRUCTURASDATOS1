#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//N TENDRÁ UN VALOR DE 100 YA QUE SE PODRÁN REGISTRAR HASTA LOS DATOS DE 100 CANCIONES
#define N 100

//CODIGO DE LA CANCION(NUMERICO)
//NOMBRE DE LA CANCION
//NOMBRE DEL ALBUM
//NUMERO DE CANTANTES
//NOMBRE DEL O DE LOS CANTANTES
//NUMERO DE REPRODUCCIONES

//TODOS TENDRÁN UNA CAPACIDAD DE 30 CARACTERES
typedef struct
{
    int CodCancion;
    char NomCancion[30];
    char NomAlbum[30];
    int NumCantantes;
    char Cantante_s[30];
    int NumReproducciones;

}TCanciones;

//HABRÁ UNA FUNCIÓN DE CAPTURA Y OTRA DE BÚSQUEDA (PARA SABER CUAL ES LA QUE TIENE MAS FAMA)
TCanciones CapturaDatos();
void CapturaTodasCanciones(TCanciones Array[], int Canciones);
int EncuentraPopular(TCanciones Array[],int Canciones);
int main()
{
    int Canciones,Popular;
    TCanciones Array[100]
    ;
    printf("Dame la cantidad de canciones a las que se recopilaran los datos: ");
    scanf("%d",&Canciones);

    printf("------------------------------------------------------------------\n");

    CapturaTodasCanciones(Array,Canciones);
    Popular=EncuentraPopular(Array,Canciones);

    printf("------------------------------------------------------------------\n");

    //EL USUARIO PROCEDERÁ A ESCRIBIR LOS DATOS DE LA CANCIÓN SOLICITADA

    printf("Los datos de la cancion con el mayor numero de reproducciones es:\n");
    printf("El codigo de la cancion es: %d \n",Array[Popular].CodCancion);
    printf("El nombre de la cancion es: %s \n",Array[Popular].NomCancion);
    printf("El nombre del album es: %s \n",Array[Popular].NomAlbum);
    printf("El numero de cantantes es: %d\n",Array[Popular].NumCantantes);
    printf("El o los cantantes son: %s\n",Array[Popular].Cantante_s);
    printf("El numero de reproducciones de la cancion es: %d\n",Array[Popular].NumReproducciones);

}

TCanciones CapturaDatos()
{
    TCanciones C;
    printf("----------------------------\n");
    printf("Ingresa el codigo de cancion; ");
    scanf("%d",&C.CodCancion);
    fflush(stdin);
    printf("Ingresa el nombre de la cancion; ");
    gets(C.NomCancion);
    printf("Ingresa el nombre del album; ");
    fflush(stdin);
    gets(C.NomAlbum);
    printf("Ingrese el numero de cantantes; ");
    scanf("%d",&C.NumCantantes);
    fflush(stdin);
    printf("Ingrese el o los nombres de los cantantes; ");
    gets(C.Cantante_s);
    printf("Ingrese el numero de reproducciones; ");
    scanf("%d",&C.NumReproducciones);
    return(C);
}
//SE GUARDAN LOS DATOS
void CapturaTodasCanciones(TCanciones Array[], int Canciones)
{
    int i;
    for(i=0;i<Canciones;i++)
    {

        Array[i]=CapturaDatos();

    }
}
//SE HARÁ LA COMPARACIÓN DEL NÚMERO DE REPRODUCCIONES ENTRE TODAS LAS CANCIONES DADAS PARA SABER CUAL ES MÁS POPULAR
int EncuentraPopular(TCanciones Array[],int Canciones)
{
    int i,aux=0, indPopular;
    for(i=0;i<Canciones;i++)
    {
        if(Array[i].NumReproducciones>aux)
        {
            aux=Array[i].NumReproducciones;
            indPopular=i;
        }
    }
    return(indPopular);
}
