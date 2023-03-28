
#include <stdio.h>


int main(){
    int cant_pac = 0, n_pac = 0,cant_male = 0, cant_female = 0, i = 0;
    char sexo;
        
        printf("¿Cuantos pacientes quieres ingresar?");
      do{

        scanf ("%d" , &cant_pac);
        if(cant_pac <= 0) {
            printf("\ndato no valido, ingrese nuevamente\n");
            
        }
      }while(cant_pac <= 0);
      
        for (i = 1; i<=cant_pac; i++){
           
            printf("intoduzca el sexo del paciente h para hombre y m para mujer");
            do{
               
                scanf("%c", sexo);
                       
                        
            }while((sexo!='f')&&(sexo!='m'));
            
             if(sexo == 'h'){
                            cant_male = cant_male + 1;
                        }else{
                            cant_female = cant_female + 1;
                        }
                
            
            
        }
        printf("cantidad de hombres es: %d", cant_male);
        }

