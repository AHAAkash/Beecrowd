#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    if (N >= 1) {
        cout << a;
    }

    for (int i = 1; i < N; i++) {
        cout << " " << b;
        int next = a + b; 
        a = b; 
        b = next; 
    }

    cout << endl; 

    return 0;
}
