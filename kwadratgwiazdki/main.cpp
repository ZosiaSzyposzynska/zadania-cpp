#include <iostream>

int main() {

    using namespace std;

    int n;

    // Pobieramy liczb� gwiazdek od u�ytkownika
    cout << "Podaj rozmiar kwadratu: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        //  tworzy nowy rz�d
        for (int j = 0; j < n; j++) {
            // wype�nia rz�d gwiazdkami
            cout << "* ";
        }
        // Przej�cie do nowego rz�du
        cout << endl;
    }

    return 0;
}
