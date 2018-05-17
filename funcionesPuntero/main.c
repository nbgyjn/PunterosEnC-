#include <stdio.h>
#include <stdlib.h>
void Intercambiar(int num1,int num2);
void IntercambiarPuntero(int *num1,int *num2);


int main()
{
    int edadUno;
    int edadDos;

    edadUno=22;
    edadDos=99;
    //Intercambiar(edadUno,edadDos);
    IntercambiarPuntero(&edadUno,&edadDos);
    printf("\n edad 1: %d",edadUno);
    printf("\n edad 2: %d",edadDos);
    return 0;
}

void Intercambiar(int num1,int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}

void IntercambiarPuntero(int *num1,int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;
}
