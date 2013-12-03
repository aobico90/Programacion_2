#include <iostream>
#include <stdlib.h>
#include <stdio.h>



using namespace std;
/*
Ciclo Anidado
Elaborar un programa donde ingresemos un numero, luego
preguntar i deseamos ingresar otro numero.
Al finalizar presentar la suma de los numeros ingresados.
Numeros entre 1 y 100.
*/

int main()
{ int numero; char resp;
  int suma;
  suma=0;

  do
  { do
     {
      cout<<"ingresar numero entre 1 y 100...";
      cin>>numero;
     }while ((numero<1) or (numero>100));   //while(!((numero>=1) and (numero<=100)))
     _flushall();

     do
     {
         cout<<"Desea continuar..:";
         cin.get(resp);
         _flushall();

     }while ((resp!='N') and (resp!='S'));
     suma+=numero;


  }while(resp!='N');
  cout<<"Programa finalizado"<<"\n";
  cout<<"suma total..."<<suma<<"\n";

    return 0;
}
