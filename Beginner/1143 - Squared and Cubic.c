#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 1;
    for (int i = 1; i <= N; ++i) {
        cout << count << " " << count * i << " " << count * i * i << endl;
        count++;
    }

    return 0;
}
