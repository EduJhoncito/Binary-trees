#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingenieria.c"
#include "diseño.c"
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
        raizIngenieria = nuevoNodoIngenieria(" Desarrollador backend-Google\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregar(raizIngenieria, " Desarrollador backend-Amazon\n");
    agregar(raizIngenieria, " Desarrollador fullstack-Tesla\n");
    agregar(raizIngenieria, " Desarrollador frontend-Rappi\n");
    agregar(raizIngenieria, " Ingeniero de software-Mercado Libre\n");
    agregar(raizIngenieria, " Ingeniero de software senior-BCP\n");
    agregar(raizIngenieria, " Desarrollador backend-Mercado Libre\n");

    if (raizDiseno == NULL)//aqui comprobamos si la raiz es nula
    {
        raizDiseno = nuevoNodoDiseno(" Diseñador UI-Amazon\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregarDiseno(raizDiseno, " Diseñador UI-Spotify\n");
    agregarDiseno(raizDiseno, " Diseñador UX-Spotify\n");
    agregarDiseno(raizDiseno, " Diseñador UX-Rappi\n");
    agregarDiseno(raizDiseno, " Diseñador UX-Google\n");
    agregarDiseno(raizDiseno, " Diseñador UX-Amazon\n");


    if (raizEdicion == NULL)//aqui comprobamos si la raiz es nula
    {
        raizEdicion = nuevoNodoEdicion(" Editor de videos-Badabun\n");//si es asi pues le agregamos la cadena LUIS
    }
    // Agregar varias cadenas
    agregarEdicion(raizEdicion, " Editor de videos-Juega German\n");
    agregarEdicion(raizEdicion, " Editor de fotos- The Rock\n");
    agregarEdicion(raizEdicion, " Editor de fotos-Cristiano Ronaldo\n");
    agregarEdicion(raizEdicion, " Editor de videos-Luisito Comunica\n");


    printf("\nIngeniería de software [1] \n");
    printf("\nDiseñador interactivo [2]\n");
    printf("\nEditor de contenido [3]\n");
    printf("\nIngrese la opción de tipo de trabajo que desea solicitar: ");
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