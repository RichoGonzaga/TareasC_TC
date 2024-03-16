#include <stdio.h>
int i,m;


int main() {
    printf("Ingrese el número que quiera saber su tabla de multiplicar\n");
    scanf("%d",&m);

    for(i=1;i<=10;i++){
        printf("%d X %d = %d \n",m,i,m*i);
    }
 return 0;
}   