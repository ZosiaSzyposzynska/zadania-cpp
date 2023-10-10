#include <iostream>

int main() {

    using namespace std;

    int n;

    // Pobieramy n liczb
    cout << "Podaj n liczb: ";
    cin >> n;

    // Tworzymy tablicê do przechowywania ci¹gu liczb
    float tab[n];

    // Wczytujemy ci¹g liczb od u¿ytkownika
    cout << "Podaj " << n << " liczby: ";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    // Wyœwietlamy wczytane liczby na ekranie
    cout << "Wczytane liczby: ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
