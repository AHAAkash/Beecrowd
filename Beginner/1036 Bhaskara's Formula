#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;   
    double del = B * B - 4 * A * C;
    if (A == 0 || del < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        // Calculate the roots
        double R1 = (-B + sqrt(del)) / (2 * A);
        double R2 = (-B - sqrt(del)) / (2 * A);
        //cout<<R1<" "<<R2;
        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }    
    return 0;
}
