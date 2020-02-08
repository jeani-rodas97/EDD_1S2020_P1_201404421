#include "ListaDobleChar.h"

ListaDobleChar::ListaDobleChar()
{
    this->Primero = 0;
    this->Ultimo = 0;
}

bool ListaDobleChar::Vacia()
{
    return this->cant == 0;
}
