//Funcion suma
//Version 1 - Recibe 2 float - Devuelve un float
#include <stdio.h>
float suma(float, float);//Prototipo
int main(void){
float A, B, Resultado;
printf("1er Valor:\t");
scanf("%f", &A);
printf("2do Valor:\t");
scanf("%f", &B);
Resultado=suma(A, B);
// A y B son los ARGUMENTOS
printf("La Suma es: %.2f", Resultado);
printf("\n\n");    return 0;
}
float suma(float X, float Y)
// X e Y son los PARAMETROS FORMALES
{    float Z;    Z=X+Y;    return(Z);
// Z es el VALOR DEVUELTO
    }
