#include <iostream>

using namespace std;
/*
Ingresar el nombre del emepleado, el turno y las horas.
Determinar el pago por hora, el pago bruto,
IHSS y total a pagar. turno1=100, turno2=150, turno3=190;
para el seguro si el salario es arriba de 7000 es igual a
245 y si no deducir del salario bruto el 3.58%"
*/
int main()
{char nombre[30];
 int turno,horas,pxh;
 double ihss,tp,pb;

    cout << "Ingresar el nombre...>";
    cin.getline(nombre,30);

    cout<<"Ingresar el turno 1,2,3...>";
    cin>>turno;

    cout<<"Ingresar las horas...>";
    cin>>horas;
    if (turno==1)
    {
        pxh=100;
    }
    else if (turno==2)
    {
        pxh=150;
    }
    else if (turno==1)
    {
        pxh=190;
    }
    else
    {
        pxh=0;
    }
    pb=pxh*horas;
    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }
    tp=pb-ihss;
    cout<<"Pago por hora...."<<pxh<<"\n";
    cout<<"Pago bruto......."<<pb<<"\n";
    cout<<"Seguro social...."<<ihss<<"\n";
    cout<<"Total a pagar...."<<tp<<"\n";

    return 0;
}
