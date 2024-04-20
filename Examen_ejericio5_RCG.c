#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int i,j,aux,s;

void PrintArray(int array[],int n){
    printf("El arreglo es: [");
    for(i=0;i<n;i++){
        printf("%d,",array[i]);
    }
    printf("]\n");
}


void OrderAsc(int array[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

}

void OrderDes(int array[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(array[j]<array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

}

int SumElementArray(int array[], int n){
    s=0;
    for(i=0;i<n;i++){
        s = s + array[i];
    }
    return s;
}


int main() {
int lista[5] = {23,4,1,44,55};  
int suma;
suma = SumElementArray(lista,5);

if(suma % 2 == 0){
    OrderAsc(lista,5);
    PrintArray(lista,5);
} else{
    OrderDes(lista,5);
    PrintArray(lista,5);
}


return 0;
}