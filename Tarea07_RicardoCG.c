#include <stdio.h>
#include <stdlib.h>
int i,j,s,k;
float p;
char nombre[20];



void sumimp(i){
    s=0;
    for(j=1;j<=i;j++){
    printf("%d\n",j);
    if(j%2==1){
        s=s+j;
        }
    }
    printf("La suma total de los impares es: %d\n",s);



            }



int main() {

printf("¿En qué número quieres que termine de contar?\n");
scanf("%d",&i);
system("clear");
sumimp(i);

    return 0;
}