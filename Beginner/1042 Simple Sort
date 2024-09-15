#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x <= y && x <= z) {
        if (y <= z) {
            cout << x << endl << y << endl << z << endl;
        } else {
            cout << x << endl << z << endl << y << endl;
        }
    } else if (y <= x && y <= z) {
        if (x <= z) {
            cout << y << endl << x << endl << z << endl;
        } else {
            cout << y << endl << z << endl << x << endl;
        }
    } else if (z <= x && z <= y) {
        if (x <= y) {
            cout << z << endl << x << endl << y << endl;
        } else {
            cout << z << endl << y << endl << x << endl;
        }
    }

    cout << endl;
    cout << x << endl << y << endl << z << endl;

    return 0;
}
