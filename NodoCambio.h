#ifndef NODOCAMBIO_H
#define NODOCAMBIO_H

#include <iostream>
using namespace std;

class NodoCambio
{
    public:
        NodoCambio *Sig;
        string buscar;
        string reemplazar;
        bool estado;
        string palabra;
        int posicion;
        NodoCambio(string buscar, string reemplazar, bool estado, string palabra, int posicion);

    protected:

    private:
};

#endif // NODOCAMBIO_H
