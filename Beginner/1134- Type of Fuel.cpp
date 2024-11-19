#include <iostream>

using namespace std;

int main() {
    int alcohol = 0, gasoline = 0, diesel = 0;
    int code;

    while (true) {
        cin >> code;

        if (code == 1) {
            alcohol++;
        } else if (code == 2) {
            gasoline++;
        } else if (code == 3) {
            diesel++;
        } else if (code == 4) {
            break;
        } else {
            continue;
        }
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << "\n";
    cout << "Gasolina: " << gasoline << "\n";
    cout << "Diesel: " << diesel << "\n";

    return 0;
}
