#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
-Ingrese la base y el exponente usando procedimiento.
--Luego calcular la base y el exponente usando una funcion.
---Luego preguntar si desea continuar usando una funcion para devolver
   una respuesta s o n validada.
*/
using namespace std;

char respuesta()

{ char resp;
    do
    {
        cout<<"Desea continuar...";
        cin.get(resp);
        _flushall();
    }while ((resp!='s') and (resp!='n'));

    return resp;


}
//procedimiento para ingresar base y expo.
void ingreso(int &base, int &expo)
{
    cout<<"Ingresar la base...:";
    cin>>base;
    cout<<"Ingresar exponente...:";
    cin>>expo;
}

//funcion para calcular la potencia.
int potencia(int base, int expo)
{
    int pot=1;
    for(int i=0; i<expo; i++)
    {
        pot*=base;
    }
    return pot;
}

int main()
{char resp;
 int base, expo, poten;
 do
 {
     ingreso(base, expo);
     poten=potencia(base, expo);
     _flushall();
     cout<<"Potencia es..."<<poten<<"\n";
     resp=respuesta();

 }while (resp!='n');

    return 0;
}
