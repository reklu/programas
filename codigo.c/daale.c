#include<stdio.h>
struct nums{short a;
short b;
short r;};
struct nums funcion (struct nums);
struct nums funcion(struct nums r)
{
struct nums nums;
printf("\nIngrese num1:");
scanf("%hd",&nums.a);
printf("\nIngrese num2:");
scanf("%hd",&nums.b);
short opc;
printf("\nIngrese operacion qe desea realizar: 1.suma 2.resta");
scanf("%hd",&opc);
if(opc==1)
{
    nums.r=nums.a+nums.b;
}
if(opc==2)
{
    nums.r=nums.a-nums.b;
}
return r;
};

int main(void)
{
struct nums n;
struct nums nums;
short op;
op=funcion;
printf("El result es:%hd",op);
}
