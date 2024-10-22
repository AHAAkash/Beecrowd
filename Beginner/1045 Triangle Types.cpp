#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C, temp;
    cin >> A >> B >> C;
    
    if (A < B) {
        temp = B;
        B = A;
        A = temp;
    }
    if (A < C) {
        temp = C;
        C = A;
        A = temp;
    }
    if (B < C) {
        temp = C;
        C = B;
        B = temp;
    }

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || A == C || B == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
