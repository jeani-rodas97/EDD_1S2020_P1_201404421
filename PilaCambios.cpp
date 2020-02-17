#include "PilaCambios.h"
#include "PilaRevertidos.h"
#include <iostream>
using namespace std;

PilaCambios::PilaCambios()
{
    Primero = 0;
}

void PilaCambios::push(string buscar, string reemplazar)
{
    NodoCambio *nuevo = new NodoCambio(buscar, reemplazar, 0, "null", 0);
    nuevo->Sig = Primero;
    Primero = nuevo;
}

void PilaCambios::pop()
{
    PilaRevertidos revertir;
    if(Primero != 0)
    {
        revertir.push(Primero->buscar, Primero->reemplazar);
        Primero = Primero->Sig;
    }
}
