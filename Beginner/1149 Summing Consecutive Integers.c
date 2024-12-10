#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;
    while (N <= 0) {
        cin >> N;
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += (A + i);
    }
    cout << sum << endl;

    return 0;
}

