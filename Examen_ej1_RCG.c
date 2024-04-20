#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n;



int main() {
printf("Ingrese la calificación númerica: \n");
scanf("%d",&n);
if(n>=90){
    printf("Su calificación es de A.\n");
} else if(n>=80){
    printf("Su calificación es de B.\n");
} else if(n >= 70){
    printf("Su calificación es de C.\n");
} else if(n>=60){
    printf("Su calificación es de D.\n");
} else{
    printf("Su calificación es de F.\n");
}
return 0;
}