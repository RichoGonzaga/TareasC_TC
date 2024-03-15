#include <stdio.h>
int i,s;
int main() {
    i = 1;
    s=0;
    while (i <= 5){
        printf("%d\n",i);
        if(i%2 ==0){
            s=s+i;
            
        }
        i++;
    }
    printf("La suma total de los números pares es %d",s);

    return 0;
}