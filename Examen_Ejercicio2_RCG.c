#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n,i;



int main() {
    printf("Ingresa un número entero positivo, por favor.\n");
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){
            printf("%d\n",i);
        }
    } else{
        printf("número no valido");
    }

return 0;
}