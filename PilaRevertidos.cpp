#include "PilaRevertidos.h"

PilaRevertidos::PilaRevertidos()
{
    Primero = 0;
}

void PilaRevertidos::push(string buscar, string reemplazar)
{
    NodoCambio *Nuevo = new NodoCambio(buscar, reemplazar, 1, "null", 0);
    Nuevo->Sig = Primero;
    Primero = Nuevo;
}
