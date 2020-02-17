#include "PilaCambios.h"
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
