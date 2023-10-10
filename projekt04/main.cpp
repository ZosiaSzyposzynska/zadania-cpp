#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Podaj liczbe: " <<endl;
    cin >> n;

    int cn = -3;

    while (cn < n) {
        cout  <<  cn << endl;
        cn = cn + 1;
    }

    cout << endl;

    return 0;
}
