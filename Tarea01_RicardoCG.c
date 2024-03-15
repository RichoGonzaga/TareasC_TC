#include <stdio.h>
//Encontar el número más grande
//O decir sí los tres números son iguales
//EOC decir si los tres números son igual a 0 
int n1, n2, n3;
//char nombre[20];

int main(int argc, char*argv[]) {
    printf("Hola, por favor ingrese el primer número: ");
    scanf("%d",&n1);
    printf("ingrese el segundo número: ");
    scanf("%d",&n2);
    printf("ingrese el tercer número: ");
    scanf("%d",&n3);

    if (n1>n2 && n1>n3){
        printf("%d es el número más grande de los tres \n",n1);

    } else if (n2>n1 && n2>n3){
        printf("%d es el número más grande de los tres \n",n2); 
    } else if (n3>n1 && n3>n2){
        printf("%d es el número más grande de los tres \n",n3);
    } else if (n1 == n2 && n2 == n3 && n1 == 0){
        printf("los tres números son iguales y nulos \n");
    } else if (n1 == n2 && n2 == n3 ){
        printf("los tres números son iguales a %d \n",n1);
    } 

    return 0;
    }