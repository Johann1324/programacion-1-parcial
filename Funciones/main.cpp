#include <iostream>

using namespace std;
int na,ne,nf,aprob,reprob;
char nombre [30];

void lecturaDatos(int &na,int &ne,char nombre[])

{   cout <<"Nombre del alumno...";
    cin.getline(nombre,30);
   cout<<"Nota Acumulada....";
   cin>>na;
   cout<<"Nota examen.....";
   cin>>ne;

}

int Observa(int nf)
{
    if(nf>=60)
   {
       cout <<"aprobado...";
   }
   else
   {
       cout<<"reprobado...";
   }
   cout<<"\n";
}

int notafinal(int na,int ne)
{   int xnf;
    xnf=na+ne;
    return xnf;
}


int  main()
{
   lecturaDatos(na,ne,nombre);
   nf=notafinal(na,ne);
   cout<<"Nota Final..." <<nf<<"\n";
  Observa(nf);
  return 0;
}
