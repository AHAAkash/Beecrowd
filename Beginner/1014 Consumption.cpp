#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X; 
    double Y; 

    cin >> X >> Y;

    double aveCon = X / Y;

    cout << fixed << setprecision(3);
    cout << aveCon<< " km/l" << endl;

    return 0;
}
