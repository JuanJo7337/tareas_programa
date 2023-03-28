#include <stdio.h>


int dolares;
float euro = 166.386;
float res ;


 int main()
{
    printf("ingresa su cantidad en dolares ");
    scanf("%d",&dolares);
    
      
 res = dolares/euro;
    
     printf("\n\nsu cantidad en euros es: %5f",res);
 
     
    

    
}