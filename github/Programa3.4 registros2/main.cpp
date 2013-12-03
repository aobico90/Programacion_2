#include <iostream>

using namespace std;
/*
---Elaborar un programa donde se declare la siguiente estructura
NOMBRE, HORAS, HN, HE, PN, PE, PB, IHSS Y TP.
---Se tiene que elaborar un procedimiento para ingresar los datos
al registro, luego debemos de calcular las HN, HE, PN, PE, PB, IHSS Y TP en un procedimiento
(las horas normales son las primeras 40 y las demas son extras)

---Se tiene que elaborar una funcion para determinar el seguro social
donde solo se ingrese el pago bruto que es parte de la estructura
y nos devuelva el IHSS.

emplex.ihss=seguro(emplex.pb)
---Luego presentar los datos usando un procedimiento.

*/

int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
