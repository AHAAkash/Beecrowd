#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    double MEDIA = (A * 3.5 + B * 7.5) / 11.0;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}
