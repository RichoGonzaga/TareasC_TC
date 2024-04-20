#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main() {
int op,n;
    printf("Ingresa un número de día (del 1 al 7):\n ");
    scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("Lunes.\n");
            break;
        case 2:
            printf("Martes.\n");
            break;
        case 3:
            printf("Miercoles.\n");
            break;
        case 4:
            printf("Jueves.\n");
        break;
        case 5:
            printf("Viernes.\n");
        break;
        case 6:
            printf("Sabado.\n");
        break;
        case 7:
            printf("Domingo.\n");
        break;                    
        default:
            printf("Número de día inválido.\n");
            break;
        }


return 0;
}