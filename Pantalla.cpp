#include "Pantalla.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>

Pantalla::Pantalla()
{
    //ctor
}

bool Pantalla::Ajustar(int ancho, int alto)
{
    _COORD Coordenada;
    Coordenada.X = ancho;
    Coordenada.Y = alto;

    _SMALL_RECT Borde;
    Borde.Top = 0;
    Borde.Left = 0;
    Borde.Right = ancho -1;
    Borde.Bottom = alto -1;

    HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE); //Manipular consola
    SetConsoleScreenBufferSize(consola, Coordenada); //Ajustar
    SetConsoleWindowInfo(consola, TRUE, &Borde); //Cambiar el tamaño
    return TRUE;
}
