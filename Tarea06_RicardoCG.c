#include <stdio.h>
#include <stdlib.h>
int i,j,s,k;
float p;
char nombre[20];



void promn(){
            printf("¿Cuál es tu nombre?\n");
            scanf("%s", nombre);
            printf("¿De qué paraja de números quieres sacar el promedio?\n");
            scanf("%d %d",&i,&j);
            printf("%s, El promedio de %d y %d es: %.2f.\n",nombre,i,j,(i+j)/2.0);



            }



int main() {

promn();

    return 0;
}