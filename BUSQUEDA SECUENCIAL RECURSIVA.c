#include <stdio.h>

int BusquedaSecuRecu(int arr[TAM],int num,int n){


  if(arr[n]==num)
 {
     return n;
 }
 if(n>=TAM)
 {
     return -1 ;
 }



 else{

   busquedaSecRec( arr, num,n+1);
