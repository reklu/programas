#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define tamano 10
struct info{
               char nombre[51]; // char 1 Byte    // 51 bytes
               short legajo;    // short 2 Bytes  //
               float sueldo;    // float 4 Bytes  //
           };                                     // 57 bytes (como mínimo)
int main(void)
{
   char fin[]="fin";
   char auxiliar[51];
   struct info X[tamano];
   short indice=0;
   float suma;
   float promedio;
   short cantidad;
   short tamVector = sizeof(X);
   //printf("Resultado del sizeof: %d \n\n", tamVector);    // INICIALIZO EL AREA DE MEMORIA DE X EN CERO
   memset( X, NULL, tamVector );
   __fpurge(stdin);
       printf("\nIngrese el nombre: ");
       fgetch(auxiliar,51,stdin);



       while(strcmp( fin, auxiliar )!=0&&indice<tamano)
       {
           strcpy(X[indice].nombre,auxiliar);
           printf("\nIngrese el legajo: ");
           scanf("%hd",&X[indice].legajo);
           printf("\nIngrese el sueldo: ");
           scanf("%f",&X[indice].sueldo);
           __fpurge(stdin);
           printf("\nIngrese el nombre: ");
           scanf("auxiliar");
           indice++;
       }    //cantidad=indice;    for(indice=0; strlen(X[indice].nombre) != 0 ;indice++)
   {
       suma = suma + X[indice].sueldo;
   }    if( indice > 0 )
   {
       promedio=suma/indice;
       printf("\nEl promedio es: %f\n\n",promedio);
   }
   else
   {
       printf("No se ingresaron personas\n");
   }    indice=0;
   while( strlen(X[indice].nombre)!= 0 )
   {
      if(X[indice].sueldo>promedio)
      {
           printf("\n\nNombre: %s",X[indice].nombre);
           printf("\nlegajo: %hd",X[indice].legajo);
           printf("\nsueldo: %f",X[indice].sueldo);
      }        indice++;
   }    return 0;
}
