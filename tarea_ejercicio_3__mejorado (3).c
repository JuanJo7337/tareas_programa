#include <stdio.h>


float billetera;
float azucar=3;
float cafe=0.72;
float acum_azucar= 0;
float acum_cafe= 0;
float kilos_de_azucar;
float kilos_de_cafe;
float dinero_sobrante;

 int main()
{
    printf("ingrese la cantidad de dolares que tiene: ");
    scanf("%f",&billetera);
  acum_azucar = billetera/2;
  acum_cafe = billetera/3;
  kilos_de_azucar = acum_azucar/azucar;
  kilos_de_cafe = acum_cafe/cafe;
  dinero_sobrante = billetera-(acum_azucar+acum_cafe);

    
     printf("\n\npuedes comprar estos kilos de azucar: %6f",kilos_de_azucar);
     printf("\n\npuedes comprar estos kilos de cafe: %6f",kilos_de_cafe);
     printf("\n\nte sobran: %6f",dinero_sobrante);
    

    
}

