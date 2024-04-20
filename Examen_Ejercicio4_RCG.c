#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n, c;

void esPar(n){
    if (n%2==0){
        printf("¡Número par ingresado!\n");
        c=0;
    } else{
        printf("Número impar ingresado. Inténtalo de nuevo.\n");
        c=1;
    }
}


int main() {
    printf("Ingrese un número entero positivo, por favor:\n");
    do{
        scanf("%d",&n);
        if (n>0){
        esPar(n);
        } else{
            printf("Por favor ingrese un número entero positivo:\n");
            c=1;
        }    

    }while(c!=0);


return 0;
}