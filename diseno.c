#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXIMA_LONGITUD_CADENA 10000

struct nodoCadenaDiseno{
    char cadena1[MAXIMA_LONGITUD_CADENA];
    struct nodoCadenaDiseno *izquierda;
    struct nodoCadenaDiseno *derecha;
};

struct nodoCadenaDiseno *nuevoNodoDiseno(char cadena1[MAXIMA_LONGITUD_CADENA]){
    size_t tamanioNodoDiseno = sizeof(struct nodoCadenaDiseno);
    struct nodoCadenaDiseno *nodoDiseno = (struct nodoCadenaDiseno *)malloc(tamanioNodoDiseno);
    strcpy(nodoDiseno->cadena1, cadena1);
    nodoDiseno->izquierda = nodoDiseno->derecha = NULL;
    return nodoDiseno;
}
void agregarDiseno(struct nodoCadenaDiseno *nodoDiseno, char *cadena1){
    if (strcmp(cadena1, nodoDiseno->cadena1) > 0){
        if (nodoDiseno->derecha == NULL){
            nodoDiseno->derecha = nuevoNodoDiseno(cadena1);
        }
        else{
            agregarDiseno(nodoDiseno->derecha, cadena1);
        }
    }
    else{
        if (nodoDiseno->izquierda == NULL)
        {
            nodoDiseno->izquierda = nuevoNodoDiseno(cadena1);
        }
        else{
            agregarDiseno(nodoDiseno->izquierda, cadena1);
        }
    }
}
void inordenDiseno(struct nodoCadenaDiseno *nodoDiseno){
    if (nodoDiseno != NULL)
    {
        inordenDiseno(nodoDiseno->izquierda);
        printf("%s,", nodoDiseno->cadena1);
        inordenDiseno(nodoDiseno->derecha);
    }
}