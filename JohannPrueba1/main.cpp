#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    int num;
    int c=0;
    int mayor=0;
    int menor=1000000;
    double suma1;
    double suma2;
    double suma3;
    double promedio1;
    double promedio2;
    double promedio3;
    while (c<5)
    {
        cout <<"ingresar numero...:";
        cin>>num;
        {if(num>mayor)
        {
            mayor=num;
        }}
         {if(num<menor)
        {
            menor=num;
        }}

        if ((num>=1) and (num<=50))
           { c1++;
            suma1+=num;
            {if (c1>0)
            promedio1=suma1/c1;
            else
                promedio1=0;
            }}
        else if ((num>=51) and (num<=100))
            {c2++;
            suma2+=num;
            {if (c2>0)
            promedio2=suma2/c2;
            else
                promedio2=0;
            }}
        if (num>101)
           {c3++;
            suma3+=num;
            {if (c3>0)
            promedio3=suma3/c3;
            else
                promedio3=0;
            }}
            c++;



    }
   cout<<"numero 1-50"<<c1<<"\n";
   cout<<"numero 51-100"<<c2<<"\n";
   cout<<"numero >100"<<c3<<"\n";
   cout<<"promedio 1"<<promedio1<<"\n";
   cout<<"promedio 2"<<promedio2<<"\n";
   cout<<"promedio 3"<<promedio3<<"\n";
    return 0;
}
