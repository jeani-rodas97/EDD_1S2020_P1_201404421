#include <iostream>
#include <stdlib.h> //Para opciones de la consola
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#include "Pantalla.h"
#include "ListaDobleChar.h"

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
    ListaDobleChar DobleLista;
    char key;
    int opcion, ascii;
    //Pantalla pant;
    //pant.Ajustar(150,50);
    system("color 5f");
    menu();
    cin>>opcion;
    //Opciones del munu
    do
    {
        switch(opcion)
        {
            case 1:
                system("cls"); //Para limpiar la ventana
                cout<<"\t*Buscar y reemplazar (CTRL + W) \t\t *Reportes (CTRL + C) \t\t *Guardar (CTRL + S)\n";
                while(1)
                {
                    key = getch();
                    ascii = key;
                    if(ascii == 27)
                        break;
                    DobleLista.Insertar(key);
                    cout << "Tecla presionada " << key << endl;
                    DobleLista.Mostrar();
                }
                break;
        }

    }while(opcion!=4);
    return 0;
}
