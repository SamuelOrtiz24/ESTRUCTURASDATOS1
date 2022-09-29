#include<stdio.h>
#define tam 10
void imprimir(int Arr[tam][tam]);
void patron2(int Arr[tam][tam]);
void patron3(int Arr[tam][tam]);
int main()
{
    int arreglo[tam][tam];
    patron2(arreglo);
    patron3(arreglo);

    return 0;
}
void imprimir(int Arr[tam][tam])
{
    int contF, contC;
    for(contF=0; contF<tam; contF++)
    {
        for(contC=0; contC<tam; contC++)
            printf("%d ", Arr[contF][contC]);
        printf("\n");
    }
}

void patron2(int Arr[tam][tam])
{
    int fil, col;
    for(fil=0; fil<tam; fil++)
    {
        for(col=0; col<tam; col++)
        {
            if(fil==col || fil+col==tam-1)
                Arr[fil][col]=1;
            else
                Arr[fil][col]=0;
        }
    }
    imprimir(Arr);
    printf("\n");
}
void patron3(int Arr[tam][tam])
{
    int fil, col, cuad,dis=0, cond=tam;
    for(cuad=0; cuad<(tam/2);cuad++)
    {
        cond=cond-dis;
        if(dis==cond)
             Arr[dis][dis]=1;
        for(fil=dis; fil<cond; fil++)
        {
            for(col=dis; col<cond; col++)
            {
                if(fil+col==fil+dis || fil+col==tam+col-dis-1)
                {
                    Arr[fil][col]=1;
                    Arr[col][fil]=1;
                }
                else
                    Arr[fil][col]=0;
            }
        }
        dis=dis+2;
    }
    imprimir(Arr);
    printf("\n");
}
