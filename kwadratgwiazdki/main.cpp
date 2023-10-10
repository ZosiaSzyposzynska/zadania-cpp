#include <iostream>

int main() {

    using namespace std;

    int n;

    // Pobieramy liczbê gwiazdek od u¿ytkownika
    cout << "Podaj rozmiar kwadratu: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        //  tworzy nowy rz¹d
        for (int j = 0; j < n; j++) {
            // wype³nia rz¹d gwiazdkami
            cout << "* ";
        }
        // Przejœcie do nowego rzêdu
        cout << endl;
    }

    return 0;
}
