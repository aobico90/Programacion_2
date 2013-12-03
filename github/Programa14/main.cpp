#include <iostream>

using namespace std;
/*
Ingresar la base y el exponente y
determinar la potencia usando el ciclo for
*/

int main()
{ int base, exponente, potencia;

potencia=1;

cin>>base;


cin>>exponente;

for(int i=0; i<exponente; i++)
{
potencia= potencia*base;
}

cout<<"potencia es..."<<potencia<<"\n";















    return 0;
}
