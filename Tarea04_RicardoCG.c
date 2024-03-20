#include <stdio.h>
int i,s;


int main() {
    i=1;
    s=0;
    do{
        
        if(i%2!=0){
        printf("%d\n",i);
        i++;
        } else{
         printf("%d se usará para calcular el promedio\n",i);
        s=s+i; 
        i++;    
        }

    }while(i<=10);
    printf("El promedio es de: %d\n",s/5);
    
 return 0;

}  