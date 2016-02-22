#include <string.h>
#include <iostream>

using namespace std;

int main ()
{
    cout << ("Hola! Por favor ingrese su nombre ....\n");
    string cadena = "Hola "; //Se le da un valor inicial al string

    string nombre; //Esta cadena contendrá el nombre
    cin >> nombre; //Se lee el nombre

    cadena = cadena + nombre; //Se juntan el saludo con el nombre usando "+"
    cout << (cadena); //Se muestra el resultado final.
    return 0;
}
