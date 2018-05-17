#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11]=("miNombre");
    char *apellido=("miApellido");
    char *punteros;
    punteros=nombre;
    printf("\n%s",nombre);
    printf("\n%s",apellido);
    //printf("\n%s",*nombre);
    printf("\n%s",punteros);
    int i;
    for(i=0;*(apellido+i)!='\0';i++) // \0 termina la palabra ( o puntero)
    {
       /* if(*(apellido+i)!='\0')
        {*/
            printf("\n%c",*(apellido+i));
        //}
    }
    printf("\n%s",apellido);

    return 0;
}
