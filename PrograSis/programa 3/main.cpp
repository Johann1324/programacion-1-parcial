#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   double ne,na,nf;

   printf("Ingrese la nota examen.....");
   scanf("%lf",&ne);

   printf("Ingrese la nota acumulada...");
   scanf("%lf",&na);

   nf = (na*0.3) + (ne*0.7);
   if (nf>=60)
   {
       printf("Estado de la nota:Apr\n");
   }
else
{
    printf("Estado de la nota:Rep\n");
    printf("Necesita tutorias\n");
}

   printf("NOTA FINAL %lf \n", nf);

   system("PAUSE");

    return 0;
}
