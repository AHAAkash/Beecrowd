#include <iostream>
using namespace std;

int main() {
    int X, Z;

    cin >> X >> Z;

    while (Z <= X) {
        cin >> Z;
    }

    int sum = 0;
    int count = 0;

    for (int i = X; sum <= Z; i++) {
        sum += i;
        count++;
    }

    cout << count << endl;

    return 0;
}
