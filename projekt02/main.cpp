#include <iostream>
#include <cmath> //albo <math.h>

using namespace std;

int main()
{

   double x, y;


   std:: cout << "Podaj wartosc x: " << endl;

   cin >> x;


    y = sqrt(x);

   if ( x < 0 ) {
    cout << "Blad danych" << endl;
    return 0; //przerwij prace
   }



   std:: cout <<"Wynik y: " << y << endl;



}
