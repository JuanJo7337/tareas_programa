#include <stdio.h>


int valor_a;
int valor_b;


 int main()
{
    printf("ingrese el valor a ");
    scanf("%d",&valor_a);
    printf("ingrese el valor b ");
      scanf("%d",&valor_b);
 valor_a = valor_a + valor_b;
 valor_b = valor_a - valor_b;
 valor_a = valor_a - valor_b;

    
     printf("\n\nsu a ahora vale %d",valor_a);
     printf("\n\nsu b ahora vale %d",valor_b);
     
    

    
}