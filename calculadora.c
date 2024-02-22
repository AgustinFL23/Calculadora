#include <stdio.h>
#include <stdlib.h>
float suma(float* sumandos){} //elijan la que quieran hacer
float resta(float* resta){}
float multiplicacion(float* multiplicando){}
float division(float dividendo, divisor){}
int main(){
  int op=6;
  while(op!=5{
  printf("Seleccione la operacion que desea realizar\n");
  printf("1.- Suma");
  printf("2.-Resta");
  printf("3.-Multiplicación");
  printf("4.-División);
  printf("5.-Salir");
  scanf("%d",&op);
  switch(op){
  float num1, num2;
    
    case 1:
      printf("Ingrese el primer numero:);
      scanf("%f", &num1);
      printf("Ingrese el segundo numero:");
      scanf("%f", &num2)
      printf("la suma de %f y %d numeros es %d\n", num1, num2, suma(num1, num2);
    break;
    
    case 2:
      printf("Ingrese el primer numero:);
      scanf("%f", &num1);
      printf("Ingrese el segundo numero:");
      scanf("%f", &num2)
      printf("la resta de %f y %d numeros es %d\n", num1, num2, resta(num1, num2);
    break;
    
    case 3:
      printf("Ingrese el primer numero:);
      scanf("%f", &num1);
      printf("Ingrese el segundo numero:");
      scanf("%f", &num2)
      printf("la multiplicacion de %f y %d numeros es %d\n", num1, num2, multiplicacion(num1, num2);
    break;
    
    case 4:
      printf("Ingrese el dividendo);
      scanf("%f", &num1);
      printf("Ingrese el divisor");
      scanf("%f", &num2) 
      num2!=0?printf("La respuesta es %f",division(num1,num2)):printf("Es imposible realiza una división entre 0");
    case 5:
      
    break;
    default:
      
    break;
    
  }
  //para añadir en la opcion de multiplicación
printf("Ingrese el primer numero");
scanf("%f, &num1);
printf("Ingrese el segundo numero");
scanf("%f, &num2)
  }
  return 0;
}
