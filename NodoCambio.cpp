#include "NodoCambio.h"

NodoCambio::NodoCambio(string buscar, string reemplazar, bool estado, string palabra, int posicion)
{
    this->buscar = buscar;
    this->reemplazar = reemplazar;
    this->estado = estado;
    this->palabra = palabra;
    this->posicion = posicion;
    this->Sig = 0;
}
