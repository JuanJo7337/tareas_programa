#include <stdio.h>
int numero;

 int main()
{
    printf("Ingrese el numero: ");
    scanf("%d",&numero);
   
    if((numero%2) == 0){
        printf("\n\nEl numero %d es par", numero);
    } else {
        printf("\n\nEl numero %d es impar", numero);
    }
}