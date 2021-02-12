#include <stdio.h>
#include <stdlib.h>
/* Programa: 
	Calcula la apertura del arco.
	Entradas: 
		1. velocidad actual (decimal).
		2. velocidad máxima (decimal).
	Formula: arco = velocidad actual / velocidad máxima.
	Salida: apertura del arco (decimal).
	Ejemplo de ejecución: prog1 98 300
*/
#define VEL_ACT_INDEX 1
#define VEL_MAX_INDEX 2
int main(int argc, char **argv)
 {
   float velActual, velMax, aperturaDelArco, i;   

   velActual = atoi(argv[VEL_ACT_INDEX]); /*lee los valores de entrada*/
   velMax = atoi(argv[VEL_MAX_INDEX]);
   
   aperturaDelArco = velActual/velMax;
   printf("Apertura del arco(%f/%f) = %f\n", velActual, velMax, aperturaDelArco);
   printf("Hola mundo");
   return 0;
}

