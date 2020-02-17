#ifndef PILAREVERTIDOS_H
#define PILAREVERTIDOS_H
#include "NodoCambio.h"
#include <iostream>
using namespace std;


class PilaRevertidos
{
    public:
        PilaRevertidos();
        void push(string buscar, string reemplazar);

    protected:

    private:
        NodoCambio *Primero;
};

#endif // PILAREVERTIDOS_H
