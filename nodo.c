#include "nodo.h"
#include <stdio.h>

NODO* crear_nodo()
{
    NODO* nuevo = (NODO*)malloc(sizeof(NODO));
    if (nuevo != NULL)
    {
        nuevo->sig = NULL;
        nuevo->dato = 0;
    }
    return nuevo;
}

bool borrar_nodo(NODO *n)
{
    if (n-> sig == NULL)
    {
        free(n);
        return true;
    }
    return false;
}
NODO* agregar_dato(NODO *n, DATO d)
{
    if (n != NULL)
    {
        n->dato = d;
    }
    return n;
}

DATO obtener_dato(NODO *n)
{
    if (n != NULL)
    {
    }
    return n;
}

NODO* asignar_ref(NODO *n, NODO *e)
{
    if (n != NULL)
    {
        n->sig = e;
    }
    return n;
}

NODO* obtener_ref(NODO *c)
{
    if (c != NULL)
    {
        return c->sig;
    }
    return NULL;
}