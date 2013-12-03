#include <iostream>

using namespace std;
/*
ingresar la cantidad de numeros que necesitamos pedir.
luego ingresar el numero y determinar si es par o impar.
al final presentar cuantos pares e impares.
*/
int main()
{ int numero, cpar, cimpar,contador, nveces;
    contador=0;
    cimpar=0;
    cpar=0;
    cout<<"cuantos numeros desea ingresar?";
    cin>>nveces;

    while(contador<nveces)
    {
    cout << "Ingresar numero >";
    cin>>numero;
contador++;
    if ((numero % 2)==0)
    {
        cout<<"el numero es par"<<"\n";
        cpar++;
    }
    else
    {
        cout<<"el numero es impar"<<"\n";
        cimpar++;
    }
    }
    cout<<"numero de pares es..."<<"\n";
    cout<<"numero de impares es..."<<"\n";
    return 0;
}
