#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double a, b, c;

    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "Rownanie ma dwa pierwiastki: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);

        cout << "Rownanie ma jeden pierwiastek: " << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "Nie ma rozwiazan." << endl;
    }

    return 0;
}
