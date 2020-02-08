#ifndef LISTADOBLECHAR_H
#define LISTADOBLECHAR_H
#include "NodoChar.h"


class ListaDobleChar
{
    public:
        NodoChar *Primero;
        NodoChar *Ultimo;
        int cant;
        ListaDobleChar();
        bool Vacia();

    protected:

    private:
};

#endif // LISTADOBLECHAR_H
