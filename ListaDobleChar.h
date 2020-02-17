#ifndef LISTADOBLECHAR_H
#define LISTADOBLECHAR_H
#include "NodoChar.h"

#include <iostream>
using namespace std;


class ListaDobleChar
{
    public:
        int cant = 0;
        ListaDobleChar();
        bool Vacia();
        void Insertar(char c);
        void Mostrar();
        void Borrar();
        bool Buscar(string s);

    protected:

    private:
        NodoChar *Primero;
        NodoChar *Ultimo;
};

#endif // LISTADOBLECHAR_H
