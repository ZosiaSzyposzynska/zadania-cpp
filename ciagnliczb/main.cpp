#include <iostream>

int main() {

    using namespace std;

    int n;

    // Pobieramy n liczb
    cout << "Podaj n liczb: ";
    cin >> n;

    // Tworzymy tablic� do przechowywania ci�gu liczb
    float tab[n];

    // Wczytujemy ci�g liczb od u�ytkownika
    cout << "Podaj " << n << " liczby: ";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    // Wy�wietlamy wczytane liczby na ekranie
    cout << "Wczytane liczby: ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
