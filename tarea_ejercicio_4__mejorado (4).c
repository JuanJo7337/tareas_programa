#include <stdio.h>


int hh;
int mm;
int ss;
int seg_res;

 int main()
{
    printf("ingrese la hora ");
    scanf("%d",&hh);
    printf("ingrese los minutos ");
      scanf("%d",&mm);
    printf("ingrese los segundos ");
     scanf("%d",&ss);
 seg_res = (hh*3600)+(mm*60)+ss;

    
     printf("\n\ndesde las 0:0:0 horas han pasado estos segudos: %d",seg_res);

}