#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
INGRESAR 5 NOMBRES A UN ARREGLO
LUEGO SUSTITUIR TODAS SUS VOCALES POR LETRAS X.
*/
using namespace std;
const int n=5;
char cadena[n][30];

int consonante[n];
//ELABORAR UNA FUNCION PARA PRESENTAR CUANTAS CONSONANTES
//TIENE CADA UNA DE LAS PALABRAS DEL ARREGLO DE CADENA.
//EJEMPLO "ROMMEL" TIENE 4 CONSONANTES.

void ingreso(char cadena[n][30])
{ int i;
    for(i=0; i<n; i++)
    {
        cout<<"Ingresar la cadena["<<i<<"]...:";
        cin.getline(cadena[i],30);
    }
}

void cambiar(char cadena[n][30])
{
    int i, l, nl;
    for(i=0; i<n; i++)
    {
        nl=strlen(cadena[i]);
        for(l=0; l<nl; l++)
        {
            switch (cadena[i][l])
            {
              case 'a':
              case 'A':
              case 'e':
              case 'E':
              case 'i':
              case 'I':
              case 'o':
              case 'O':
              case 'u':
              case 'U':
                  cadena[i][l]='X';
                  break;
                  default:
                  break;

            }
        }
    }
}

void presentar(char cadena[n][30])
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"Cadena "<<cadena[i]<<"\n";
    }
}

int main()
{
    ingreso(cadena);
    cambiar(cadena);
    presentar(cadena);

    return 0;
}
