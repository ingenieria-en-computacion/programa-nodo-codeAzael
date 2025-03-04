#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;

typedef struct Nodo {
    DATO dato;
    struct Nodo *sig;
} NODO;

NODO* crear_nodo();
bool borrar_nodo(NODO *n);
NODO* agregar_dato(NODO *n, DATO d);
DATO obtener_dato(NODO *n);
NODO* asignar_ref(NODO *n, NODO *e);
NODO* obtener_ref(NODO *c);
#endif