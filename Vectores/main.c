#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero,int cantidad);

int main()
{
    int numeros[3];//son lo mismo son que con indice
    int *puntero;//es lo mismo solo que sin indice
    int auxiliar=333;
    puntero=numeros;

    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;
    printf("\n puntero : %d",*(puntero-2));
    printf("\n puntero : %d",*(puntero+1));
    printf("\n puntero : %d",*(puntero+2));
    printf("\n puntero : %d",*(puntero+3));
    printf("\n puntero : %d",*(puntero+4));


    printf("\n puntero : %d",*(numeros));

    mostrar(numeros,3);
    return 0;
}

void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n numero : %d",*(puntero+i));
    }
}
