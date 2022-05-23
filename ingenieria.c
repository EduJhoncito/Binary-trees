#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXIMA_LONGITUD_CADENA 10000


struct nodoCadenaIngenieria{
    char cadena[MAXIMA_LONGITUD_CADENA];
    struct nodoCadenaIngenieria *izquierda;
    struct nodoCadenaIngenieria *derecha;
};
struct nodoCadenaIngenieria *nuevoNodoIngenieria(char cadena[MAXIMA_LONGITUD_CADENA]){
    size_t tamanioNodo = sizeof(struct nodoCadenaIngenieria);
    struct nodoCadenaIngenieria *nodoIngenieria = (struct nodoCadenaIngenieria *)malloc(tamanioNodo);
    strcpy(nodoIngenieria->cadena, cadena);
    nodoIngenieria->izquierda = nodoIngenieria->derecha = NULL;
    return nodoIngenieria;
}
void agregar(struct nodoCadenaIngenieria *nodoIngenieria, char *cadena){
    if (strcmp(cadena, nodoIngenieria->cadena) > 0){
        if (nodoIngenieria->derecha == NULL){
            nodoIngenieria->derecha = nuevoNodoIngenieria(cadena);
        }
        else{
            agregar(nodoIngenieria->derecha, cadena);
        }
    }
    else{
        if (nodoIngenieria->izquierda == NULL)
        {
            nodoIngenieria->izquierda = nuevoNodoIngenieria(cadena);
        }
        else{
            agregar(nodoIngenieria->izquierda, cadena);
        }
    }
}
void inorden(struct nodoCadenaIngenieria *nodoIngenieria){
    if (nodoIngenieria!= NULL)
    {
        inorden(nodoIngenieria->izquierda);
        printf("%s,", nodoIngenieria->cadena);
        inorden(nodoIngenieria->derecha);
    }
}