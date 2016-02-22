#include <iostream>

using namespace std;
int turno;
char nombre[50];
double horas,pcomis,comis;

void lecturaDatos(char nombre[],double & horas, int turno)

{
  cout<<"Nombre del alumno...";
  cin.getline(nombre,50);
  cout<<"horas...";
  cin>> horas;

  do
  {
  cout<<"turno...";
  cin>> turno;
  } while ((turno>1) and (turno<3));

}

double porcomis(int turno)
{
   if (turno==1)
   {
      return 100;
   }
   else if (turno==2)
   {
       return 120;
   }
    else
    {
        return 150;
    }

}
void calcular(int turno, double horas, double &pcomis, double &comis)
{
    pcomis= porcomis(turno);
    comis= horas * pcomis;

}

int  main()
{
   lecturaDatos(nombre,horas,turno);
   calcular(turno,horas,pcomis,comis);
   cout<<"Por comision de horas...:"<<pcomis<<"\n";
   cout<<"Comision ganada...:"<<comis<<"\n";

  return 0;
}



