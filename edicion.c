#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXIMA_LONGITUD_CADENA 10000

struct nodoCadenaEdicion{
    char cadena2[MAXIMA_LONGITUD_CADENA];
    struct nodoCadenaEdicion *izquierda;
    struct nodoCadenaEdicion *derecha;
};


struct nodoCadenaEdicion *nuevoNodoEdicion(char cadena2[MAXIMA_LONGITUD_CADENA]){
    size_t tamanioNodoEdicion = sizeof(struct nodoCadenaEdicion);
    struct nodoCadenaEdicion *nodoEdicion = (struct nodoCadenaEdicion *)malloc(tamanioNodoEdicion);
    strcpy(nodoEdicion->cadena2, cadena2);
    nodoEdicion->izquierda = nodoEdicion->derecha = NULL;
    return nodoEdicion;
}
void agregarEdicion(struct nodoCadenaEdicion *nodoEdicion, char *cadena2){
    if (strcmp(cadena2, nodoEdicion->cadena2) > 0){
        if (nodoEdicion->derecha == NULL){
            nodoEdicion->derecha = nuevoNodoEdicion(cadena2);
        }
        else{
            agregarEdicion(nodoEdicion->derecha, cadena2);
        }
    }
    else{
        if (nodoEdicion->izquierda == NULL){
            nodoEdicion->izquierda = nuevoNodoEdicion(cadena2);
        }
        else{
            agregarEdicion(nodoEdicion->izquierda, cadena2);
        }
    }
}
void inordenEdicion(struct nodoCadenaEdicion *nodoEdicion){
    if (nodoEdicion != NULL)
    {
        inordenEdicion(nodoEdicion->izquierda);
        printf("%s,", nodoEdicion->cadena2);
        inordenEdicion(nodoEdicion->derecha);
    }
}