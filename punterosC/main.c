#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    numeroDos=&numero;
    punteroNumero=&numero;//asignacion de memoria
    printf("\n a- %d",numeroDos);
    numeroDos=*punteroNumero;//asignacion de valor
    printf("\n b- %d",numeroDos);
    punteroNumero=*punteroNumero;
    printf("%d\n",numero);
    printf("%d\n",numeroDos);
    printf("%d\n",&numero);
    printf("\n d-%p",punteroNumero);
    printf("\nc-%p",&punteroNumero);
    printf("\n d- %d",*punteroNumero);
    //printf("%d",*punteroNumero);
    return 0;
}
