#include <iostream>

using namespace std;

char nombre[45];
int turno;
double ventas, pcomis, comis;

void ingresoDatos (double &ventas,int turno, char nombre[])


{
    cout<<"Nombre de empleado...:";
    cin.getline(nombre,45);
    cout<<"Ventas...:";
    cin>>ventas;

    do
    {
        cout<<"Ingresar turno...:";
        cin>>turno;
    }   while ((turno<1) or (turno>3));
}
double Porcomis(int turno)
{
    if (turno==1)
    {
        return 0.05;
    }
    else if (turno==2)
    {
        return 0.06;
    }
    else
    {
        return 0.04;
    }
}
void calcular (int turno, double ventas, double &pcomis, double &comis)
{
    pcomis= Porcomis(turno);
    comis= ventas * pcomis;
}
int main()
{
    ingresoDatos(ventas,turno,nombre);
    calcular(turno, ventas, pcomis, comis);
    cout<<"Por. de comision...:"<<pcomis<<"\n";
    cout<<"Comision Ganada...:"<<comis<"\n";

    return 0;
}
