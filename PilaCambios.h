#ifndef PILACAMBIOS_H
#define PILACAMBIOS_H
#include "NodoCambio.h"
#include <iostream>
using namespace std;

class PilaCambios
{
    public:
        PilaCambios();
        void push(string buscar, string reemplazar);

    protected:

    private:
        NodoCambio *Primero;
};

#endif // PILACAMBIOS_H
