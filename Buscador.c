#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingenieria.c"
#include "diseno.c"
#include "edicion.c"

int main()//
{
    int trabajo;
    // Declarar raíz en NULL para que este vacia
    struct nodoCadenaIngenieria *raizIngenieria = NULL;
    struct nodoCadenaDiseno *raizDiseno = NULL;
    struct nodoCadenaEdicion *raizEdicion = NULL;

    if (raizIngenieria == NULL)//aqui comprobamos si la raiz es nula
    {
        raizIngenieria = nuevoNodoIngenieria(" Frontend engineer-FileCloud\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregar(raizIngenieria, " Backend engineer-Archetype connect, Inc\n");
    agregar(raizIngenieria, " Java backend developer-Teknospar\n");
    agregar(raizIngenieria, " Frontend developer/Angular.js-Talent500\n");
    agregar(raizIngenieria, " Software test analyst-JMA solutions\n");
    agregar(raizIngenieria, " Software development engineer in test-DataPattern\n");

    if (raizDiseno == NULL)//aqui comprobamos si la raiz es nula
    {
        raizDiseno = nuevoNodoDiseno(" Disenador UX-CSTI\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregarDiseno(raizDiseno, " Disenador UX-Alwa\n");
    agregarDiseno(raizDiseno, " Disenador UX&UI-Fidanto\n");
    agregarDiseno(raizDiseno, " Disenador UX&UI-G&S\n");
    agregarDiseno(raizDiseno, " Disenador UX&UI-Summit\n");

    if (raizEdicion == NULL)//aqui comprobamos si la raiz es nula
    {
        raizEdicion = nuevoNodoEdicion(" Editor de videos-Badabun\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregarEdicion(raizEdicion, " Editor de videos-Juega German\n");
    agregarEdicion(raizEdicion, " Editor de fotos- The Rock\n");
    agregarEdicion(raizEdicion, " Editor de fotos-Cristiano Ronaldo\n");
    agregarEdicion(raizEdicion, " Editor de videos-Luisito Comunica\n");


    printf("\nIngenieria de software [1] \n");
    printf("\nDisenador interactivo [2]\n");
    printf("\nEditor de contenido [3]\n");
    printf("\nIngrese la opcion de tipo de trabajo que desea solicitar: ");
    scanf("%d", &trabajo);

    switch (trabajo){
    case 1:
            inorden(raizIngenieria);
            printf("\n");
            break;
    case 2:
            inordenDiseno(raizDiseno);
            printf("\n");
            break;
    case 3:
            inordenEdicion(raizEdicion);
            break;
    default:
            printf("\nIngrese 1,2 o 3!!!!\n");
            printf("\n");
            break;
    }

    return 0;
}
