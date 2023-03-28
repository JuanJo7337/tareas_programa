/* Ejercicio numero 2__Juan González__CI:30745981 */ 
#include <stdio.h>

int
main ()
{
  int cant_pac = 0, cant_male = 0, cant_female = 0, i = 0,
  edad = 0, menores_edad = 0, mayores_edad = 0, dia = 0, mes = 0, año = 0,
  dia_actual = 0,mes_actual = 0, año_actual = 0, cedu = 0, dig_C = 0, acum_cedu = 0, acum_des_30 = 0, band = 0; 
  char sexo  ;

  printf ("¿Cuantos pacientes quieres ingresar?\n");
     do{
    
          scanf ("%d", &cant_pac);
          if (cant_pac <= 0)
    	{
    	  printf ("\ndato no valido, ingrese nuevamente\n");
    
    	}
        }while (cant_pac <= 0);
        
  printf ("\ningrese la fecha actual en formato dia, mes y año presionando enter despues de ingresar cada uno\n");
         do{
            scanf("%d", &dia_actual);
        }while((dia_actual <= 0 )&& (dia_actual > 30));
        
        do{
            scanf("%d",&mes_actual);
        }while((mes_actual <= 0) && (mes_actual >12));
         do{
            scanf("%d",&año_actual);
        }while(año_actual <= 0);
  
  for(i=1; i <= cant_pac; i++)
    {
          printf("\ndime el sexo del siguiente  paciente a ingresar (h para hombre y m para mujeres)\n");
       do{
        scanf(" %c", &sexo);
        
        if((sexo != 'm') && (sexo != 'h')){
            printf("dato no valido vuelva a ingresar");
        }
         
       }while((sexo != 'm') && (sexo != 'h'));
       if (sexo == 'h'){
           cant_male = cant_male + 1;
       }else{
           cant_female = cant_female + 1;
       }
       
        printf("\ndime la edad del siguiente paciente a ingresar\n");
        do{
            scanf("%d", &edad);
        }while(edad < 0);
        
        if (edad <= 17){
            menores_edad = menores_edad + 1;
            
        }else{
            mayores_edad = mayores_edad + 1;
        }
        
        
        printf ("\ningrese la fecha de nacimiento del paciente en formato dia, mes y año, presionando enter despues de cada uno\n");
        
        do{
    
        do{
            scanf("%d", &dia);
        }while(dia <= 0 && dia > 31);
        
        do{
            scanf("%d",&mes);
        }while((mes <= 0) && (mes >12));
         
         do{
            scanf("%d", &año);
        }while(año < año_actual && año <= 0);
        
        if((((mes_actual-mes) > 0)||((dia_actual-dia) > 0))&&(año_actual-año) == edad + 1){
             edad = edad + 1;}
        
         if(((año_actual-año) != edad)){
             printf("\nla fecha de nacimiento es invalida ingresela nuevamente\n");
         }
        }while(((año_actual-año) != edad));
        
        printf("\ningrese el numero de cedula del paciente\n");
        
        do{
            scanf("%d", &cedu);
        }while(cedu<= 0);
        
        if((((cedu % 10)%2)==0)&& (sexo == 'm' )){
               
                acum_cedu = acum_cedu + 1;
        }
        
        if((edad>60)&&(sexo == 'h')){
            
            acum_des_30 = acum_des_30 + 1;
        }
        
        
        
        
        
       
        
}

    
  printf ("\ncantidad de pacientes masculinos es: %d\n", cant_male);
  printf ("\ncantidad de pacientes femeninos es: %d\n", cant_female);
  printf ("\ncantidad de pacientes mayoresde edad es: %d\n", mayores_edad);
   printf ("\ncantidad de pacientes menores de edad es: %d\n", menores_edad);
   printf("\nlas fechas de cada pacienten estan validadas\n");
   printf("\nlos pacientes con descuento del 15 porciento, por ser del sexo femenino y su cedula terminar en un numero par son: %d\n",acum_cedu);
   printf("\nlos pacientes con descuento del 30 porciento, por ser del sexo masculino y tener mas de 30 años son: %d\n",acum_des_30);
   
   
  
  
}
