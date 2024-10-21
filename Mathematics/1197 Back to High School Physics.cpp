#include <iostream>
using namespace std;

int main() {
    int v, t;
    
    while (cin >> v >> t) {
        int displacement = 2 * v * t;
        cout << displacement << endl;
    }

    return 0;
}
