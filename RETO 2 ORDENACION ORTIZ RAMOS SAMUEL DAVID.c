#include <stdio.h>
#include <locale.h>
int ordenacion( int result[],int TAM);
int main()
{
    int m;
    int n;
    printf("dame el TAM de M: ");
    scanf("%d",&m);
    for (m<0; m>100;){
        printf("el TAM debe de estar en un rango mayor a 0 y menor que 100: ");
        scanf("%d",&m);
    }
     printf("dame el TAM de N: ");
    scanf("%d",&n);
     for (n<0; n>100;){
        printf("el TAM debe de estar en un rango mayor a 0 y menor que 100: ");
        scanf("%d",&n);
     }
    int nums1[m] ;
    int nums2[n] ;
    int result[n + m];
    for(int i = 0;i < m;i++){
        printf("dame el/los valor/es %d del arreglo 1: ",i);
        scanf("%d",&nums1[i]);
    }
    for(int i = 0;i < n;i++){
        printf("dame el/los valor/es %d del arreglo 2: ",i);
        scanf("%d",&nums2[i]);
    }
    int cont_aux = 0;
    for(int i = 0;i < m; i++){
        result[i] = nums1[i];
        cont_aux++;
    }
     for(int i = 0;i < n; i++){
        result[cont_aux] = nums2[i];
        cont_aux++;
    }
    for(int i=0; i<m+n; i++){
      printf("%d,",result[i]);
  }
   ordenacion(result,n + m);

 printf("\n");
for(int i=0; i<m+n; i++){
      printf("%d,",result[i]);
  }
}
 int ordenacion(int result[],int TAM){
for (int i=1; i<TAM; i++){

    for(int j=0 ; j<TAM - 1; j++){
        if (result[j] > result[j+1]){
            int temp = result[j];
            result[j] = result[j+1];
            result[j+1] = temp;
        }
    }
}
}
