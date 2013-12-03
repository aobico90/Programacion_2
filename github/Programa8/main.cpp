#include <iostream>

using namespace std;
/*
Se tiene que ingresar el nombre del alumno,
la nota del alumno y el programa debera de
presentar la observacion usando la siguiente tabla:

1-59 Reprobado
60-80 Bueno
81-90 Muy Bueno
91-100 Sobresaliente

usar condiciones donde apliquemos el AND
*/
int main()
{   char nombre[30];
    int nota;
    cout << "Ingresar el nombre del alumno...";
    cin.getline(nombre,30);

    cout<<"Ingresar nota...";
    cin>>nota;

    if ((nota>=1)and(nota<=59))
    {
        cout<<"reprobado...";
    }

    else if ((nota>=60)and(nota<=80))
    {
        cout<<"Bueno...";
    }

    else if ((nota>=81)and(nota<=90))
    {
        cout<<"Muy Bueno...";
    }

    else if ((nota>=91)and(nota<=100))
    {
        cout<<"Sobresaliente...";
    }
    else
    {
        cout<<"Nota incorrecta";
    }




    return 0;
}
