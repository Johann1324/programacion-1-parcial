#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{    int num, mayor=0,suma=0,conta=0,contaPar;
     double promedio=0;
     char resp;
     do
    { do
        {cout<<"Ingresar numero entre 50-100...>";
          cin>>num;
          }while (!((num>=50) and (num<=100)));
        _flushall()
;     do
     {
         cout<<"desea continuar...:";
         cin.get (resp);
         _flushall();
     } while ((toupper(resp)!='S') and (toupper(resp)!='N'));
     suma = suma + num;
     if (num>mayor)
     {
         mayor = num;
     }
     conta++;
     if(num%2==0)
     {
         contaPar++;
     }
     } while ((toupper(resp)=='S'));
     promedio= suma/conta;
     cout<<"Promedio"<<promedio<<"\n";
     cout<<"Mayor es "<<mayor<<"\n";

    return 0;
}
