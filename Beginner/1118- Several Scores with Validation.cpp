#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double score;
    int Count;
    double total;
    int choice;

    do {
        Count = 0;
        total = 0.0;
        
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

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> choice;
        } while (choice != 1 && choice != 2);

    } while (choice == 1);

    return 0;
}
 
