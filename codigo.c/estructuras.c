#include <stdio_ext.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define tamano 4
struct datos{
char color;
short largo;
short ancho;
};
int main(void)
{
struct datos madera[tamano];
short indice=0;
float promedio;
char auxcolor; //para no ingresar color no valido a la estructura
char mayorcolor;
long mayorsuperficie;
long superficie;
long suma=0;unsigned short contador=0;
__fpurge(stdin);

printf("\nIngrese el color de la madera: ");
auxcolor=getchar();
auxcolor=toupper(auxcolor);//Convierte a mayuscula la letra
while(auxcolor=='R'||auxcolor=='V'||auxcolor=='A'&&indice<tamano)
{
 ->struct.maderas=auxcolor;
printf("\nIngrese el largo de la madera: ");
scanf("%hd",&madera.largo);
printf("\nIngrese el ancho de la madera: ");
scanf("%hd",&madera.ancho);
superficie=madera.largo*madera.ancho;
if(contador==0 || mayorsuperficie<superficie)
{
mayorsuperficie=superficie;
mayorcolor=madera.color;
}
suma=suma+superficie;
contador++;
__fpurge(stdin);
printf("\nIngrese el color de la madera: ");
auxcolor=getchar();auxcolor=toupper(auxcolor);
}
if(contador>0)//Evitamos dividir por cero!!!
{
promedio=(float)suma/contador;
printf("\n\nEl promedio de superficies es: %f",promedio);
printf("\nEl %c con %ld cm2 fue el color con mayor superficie",mayorcolor,mayorsuperficie);
}
else
printf("\n\nNo se ingresaron datos validos\n\n");
return 0;
}

