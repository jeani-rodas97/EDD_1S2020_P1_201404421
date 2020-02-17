#include "ListaDobleChar.h"
#include <string.h>
using namespace std;

ListaDobleChar::ListaDobleChar()
{
    this->Primero = 0;
    this->Ultimo = 0;
}

bool ListaDobleChar::Vacia()
{
    if (Primero == 0)
        return true;
    else return false;
}

void ListaDobleChar::Insertar(char c)
{
    NodoChar *nuevo = new NodoChar(c);
    if(Primero == 0) //Lista vacía
    {
        Primero = nuevo;
        Ultimo = nuevo;
    }
    else
    {
        nuevo->Ant = Ultimo;
        Ultimo->Sig = nuevo;
        Ultimo = nuevo;
    }
    cant++;
}

void ListaDobleChar::Mostrar()
{
    NodoChar *aux = Primero;
    while(aux != 0)
    {
        cout<< aux->letra << endl;
        aux = aux->Sig;
    }
}

void ListaDobleChar::Borrar()
{
    NodoChar *aux = Ultimo;
    aux->Ant->Sig = 0;
    aux->Ant = Ultimo;
    cant--;
}
