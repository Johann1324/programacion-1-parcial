#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ char resp;
   int num;

   do{

       cout<<"Numero entero..>";
       cin>>num;
       _flushall();

   {
    cout << "Desea continuar..." << endl;
    cin.get(resp);
    _flushall();

   } while ((toupper(resp) !='s') and (toupper(resp)!='N'));
} while ((toupper(resp)=='s'));

    return 0;
}
