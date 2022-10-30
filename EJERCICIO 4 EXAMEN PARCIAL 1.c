#include <stdio.h>

int Comparacion(int a, int b, int c);

int main()
{

    int a,b,c, res;

    printf("Dame el valor de a: ");
    scanf("%d",&a);
    printf("Dame el valor de b: ");
    scanf("%d",&b);
    printf("Dame el valor de c: ");
    scanf("%d",&c);

    res = Comparacion(a,b,c);

    printf("el resultado es: %d",res);

    return 0;
}

int Comparacion(int a, int b, int c){

    if(a > b){
        b = b*2;
        return b;
    }

    if(a < b){
        c = c - a;
        return c;
    }

    if(c < 0){
        c = c * -1;
        return c;
    }

    return 0;
}
