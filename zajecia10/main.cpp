#include <iostream>

int main() {

    using namespace std;


    for (int i = -3; i <= 9; i++) {
        if ((i + 3) % 3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
