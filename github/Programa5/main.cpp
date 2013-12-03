#include <iostream>

using namespace std;
/*
Se tiene que ingresar la nota del alumno y el programa debera de
presentar la observacion usando la siguiente tabla:
1-59 Reprobado
60-80 Bueno
81-90 Muy Bueno
91-100 Sobresaliente
*/

int main()
{int nota;
    cout << "Ingresar la nota del alumno...>";
    cin>>nota;

    if (nota<60)
    {
        cout <<"Reprobado"<<"\n";
    }
    else if (nota<81)
    {
        cout <<"Bueno"<<"\n";
    }
    else if (nota<91)
    {
        cout <<"Muy Bueno"<<"\n";
    }
    else
    {
        cout <<"Sobresaliente"<<"\n";
    }

    return 0;
}
