#include <iostream>

/*
Ingresar 5 numeros pares,(validar que le numero sea par)

*/
using namespace std;

int main()
{   int numero;
    for (int i=0;i<5;i++)
    { do
        {cout << "ingresar un numero par...";
         cin>>numero;
        }while (!((numero % 2)==0));
    }
    return 0;

}
