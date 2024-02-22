#include <stdio.h>
#include <stdlib.h>
float suma(float s1, float s2){} ;//elijan la que quieran hacer
float resta(float res1, res2){};
float multiplicacion(float mult1, float mult2){};
float division(float dividendo, divisor){};
int main(){
  int op=6;
  printf("Seleccione la operacion que desea realizar/n");
  while(op!=5){
  printf("1.- Suma");
  printf("2.-Resta");
  printf("3.-Multiplicación");
  printf("4.-División");
  printf("5.-Salir");
  scanf("%d",&op);
  switch(op){


    case 4:
      float num1, num2;
      printf("Ingrese el dividendo");
      scanf("%f", &num1);
      printf("Ingrese el divisor");
      scanf("%f", &num2) 
      num2!=0?printf("La respuesta es %f",division(num1,num2)):printf("Es imposible realiza una división entre 0");
    case 5:
      printf("Gracias por usarnos");
    break;
    default:
      printf("La opción introducida no es valida, revise de nuevo la lista de opciones");
    break;
    
  }
  
  }
  return 0;
}
float suma(float s1, float s2){
  return s1+s2;
} 
float resta(float res1, res2){
  return res1-res2;
}

float multiplicacion(float mult1, float mult2){
  return (float)(mult1*mult2);
}
float division(float dividendo, divisor){
  return (float)(dividendo/divisor);
}
