#include <iostream>

int main() {

    using namespace std;
    int n;


    cout << "Podaj liczbe gwiazdek: ";
    cin >> n;
//1 sposob za pomoca petli while
    cout << "Petla while: " << endl;
    int i = 0;
    while (i < n) {
        cout << "*" << endl;
        i++;
    }
//2 sposob za pomoca petli for
    cout << "Petla for: " << endl;
    for (int j = 0; j < n; j++) {
        cout << "*" << endl;
    }

    cout << endl;

    return 0;
}
