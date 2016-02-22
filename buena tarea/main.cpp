#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    int num;
    int c=0;
    int promedio;
    while (c<5)
    {
        cout <<"ingresar numero...:";
        cin>>num;

        if ((num>=0) and (num<=50))
            c1++;
        else if ((num>=51) and (num<=100))
            c2++;
        else
            c3++;
        c++;
    }
   cout<<"contador 1-50 "<<c1<<"\n";
   cout<<"contador 51-100 "<<c2<<"\n";
   cout<<"contador >100 "<<c3<<"\n";
   cout<<"promedio>>"<<promedio<<"\n";
    return 0;
}
