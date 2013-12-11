#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Ingresar 5 cadenas de tipo CHAR a un arreglo usando un procedimiento.%%%%%
Luego elaborar una funcion que cuente cuantas consonantes tiene cada uno de los  nombres
Elaborar un procedimiento para agregar al final de la caden un "*".%%%%%%
Presentar la cadena modificada con el "*" y a la par el numero de consonantes.%%%%%
*/
using namespace std;
const int n=5;
char nombre[n][30];


void ingresoCadenas(char nombre[5][30])
{ for(int i=0; i<n; i++)
     {  cout<<"Ingresar el nombre...:";
        cin.getline(nombre[i],30);
     }

}

void cambiar(char nombre[n][30])
{
    int i;
    int fin;
    for(i=0; i<5; i++)
    {
        fin= (strlen(nombre[i]));
        nombre[i][fin]='*';
    }
}

int consonante(char nombre[30])
{
    int fin=strlen(nombre);
    int contador=0;
    for (int i=0; i<fin; i++)
    {
        char letra=nombre[i];
        switch (letra)
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
              case '*':

                break;
              default:
                contador++;
                break;
        }
    }return contador;
}

void presentar(char nombre[n][30], int consonante[])
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"nombre["<<i<<"]..:"<<nombre[i]<<" tiene "
        <<consonante[i]<<" consonantes\n";
    }
}

void presentarMayor(char nombre[n][30], int consonante[])
{
    int i,pos,mayor;
    mayor=0;

    for(i=0; i<n; i++)
    {
        if(mayor< consonante[i])
        {
            mayor=consonante[i];
            pos=i;
        }
    }
    cout<<"mayor es "<<nombre[pos]<<" con "<<mayor<<"\n";
}



int main()
{
    ingresoCadenas(nombre);
    cambiar(nombre);
    presentar(nombre,consonante);
    presentarMayor(nombre,consonante);
    return 0;
}
