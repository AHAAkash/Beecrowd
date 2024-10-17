#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // Ensure x is the smaller number and y is the larger number
    if (x > y) {
        swap(x, y);
    }

    // Iterate through all numbers between x and y inclusive
    for (int i = x+1; i <= y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
