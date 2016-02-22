#include <iostream>

using namespace std;
char nombre [50];
int turno;
double horas,horaextra,phn,phe,comishn,comishe;

void IngresarDatos(double &horas,double &horaextra,int turno,double phn,double phe,char nombre[50])
{
    cout<<"nombre del empleado...:";
    cin.getline(nombre,50);

    cout<<"horas...:";
    cin>>horas;

    cout<<"horas extra...:";
    cin>>horaextra;

    do
    {
    cout<<"turno...";
    cin>> turno;
    } while ((turno>1) and (turno<4));

}

double porhn(int turno)
{
   if ((turno==1) or (turno==2))
   {
      return 200;
   }
   else if ((turno==3) or (turno==4))
   {
       return 300;
   }
}

double porhe(int turno)
{
   if ((turno==1) or (turno==2))
   {
      return 250;
   }
   else if ((turno==3) or (turno==4))
   {
       return 350;
   }
}

void calcular(int turno, double horas, double &phn, double &phe)
{
    phn= porhn(turno);
    comishn= horas * phn;
    phe= porhe(turno);
    comishe= horas * phe;

}

int main()
{
   IngresarDatos(horas,horaextra,turno,phn,phe,nombre);

   calcular(turno,horas,phn,comishn);
   cout<<"Por comision de horas normal...:"<<phn<<"\n";
   cout<<"Comision ganada...:"<<comishn<<"\n";

   calcular(turno,horas,phe,comishe);
   cout<<"Por comision de horas normal...:"<<phe<<"\n";
   cout<<"Comision ganada...:"<<comishe<<"\n";

    return 0;
}
