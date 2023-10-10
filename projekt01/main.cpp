#include <iostream> //do³¹cz nazwê pliku, plik tekstowy który ma dostêp do biblioteki iostream, w której s¹ cin, cout itp

using namespace std;

int main() //funkcja, main musi byæ dok³adnie jeden raz w programie u¿yta
{

    double a, b, x, y;

    std:: cout << "Podaj wartosc a: " << endl;
    cin >> a;

    std:: cout << "Podaj wartosc b: " << endl;
    cin >> b;

    std:: cout << "Podaj wartosc x: " << endl;
    cin >> x;

    y = a * x + b;

    std:: cout << "Wynik: " << "y = " << y << endl;


    return 0;
}
