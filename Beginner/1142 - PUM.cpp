#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 1;
    for (int i = 1; i <= N; ++i) {
        cout << count << " " << count + 1 << " " << count + 2 << " PUM" << endl;
        count+=4;
    }

    return 0;
}
