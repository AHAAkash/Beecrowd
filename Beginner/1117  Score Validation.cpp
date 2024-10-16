#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float score;
    int Count = 0;
    float total = 0.0;

    while (Count < 2) {
        cin >> score;
        
        if (score >= 0.0 && score <= 10.0) {
            total += score;
            Count++;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    cout << fixed << setprecision(2) << "media = " << total / 2 << endl;

    return 0;
}
