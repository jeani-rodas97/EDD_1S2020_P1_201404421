#include <iostream>
#include <stdlib.h> //Para opciones de la consola
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int menu()
{
    cout<<"\n\n\t******************************************************************\n";
    cout<<"\t*  UNIVERSIDAD DE SAN CARLOS DE GUATEMALA                        *\n";
    cout<<"\t*  FACULTAD DE INGENIERIA                                        *\n";
    cout<<"\t*  ESTRUCTURAS DE DATOS                                          *\n";
    cout<<"\t*  PRACTICA 1                                                    *\n";
    cout<<"\t*  JEANIFER ALEJANDRA GARCIA RODAS                               *\n";
    cout<<"\t*  201404421                                                     *\n";
    cout<<"\n\n\t******************************************************************\n";
    cout<<"\t*                               MENU                             *\n";
    cout<<"\t*  1.  Crear archivo                                             *\n";
    cout<<"\t*  2.  Abrir archivo                                             *\n";
    cout<<"\t*  3.  Archivos recientes                                        *\n";
    cout<<"\t*  4.  Salir                                                     *\n";
    cout<<"\n\n\t******************************************************************\n";

}

int main()
{
    system("color 5f");
    menu();
    return 0;
}
