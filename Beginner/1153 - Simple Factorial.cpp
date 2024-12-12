#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int factorial = 1; 
    for (int i = 2; i <= N; i++) {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}
