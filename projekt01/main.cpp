#include <iostream> //do��cz nazw� pliku, plik tekstowy kt�ry ma dost�p do biblioteki iostream, w kt�rej s� cin, cout itp

using namespace std;

int main() //funkcja, main musi by� dok�adnie jeden raz w programie u�yta
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
