#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while (true) {
        cin >> x >> y;
        
        if (x == 0 || y == 0) {
            break;
        }
        
        if (x > 0 && y > 0) {
            cout << "primeiro" << endl; // First quadrant
        } else if (x < 0 && y > 0) {
            cout << "segundo" << endl; // Second quadrant
        } else if (x < 0 && y < 0) {
            cout << "terceiro" << endl; // Third quadrant
        } else if (x > 0 && y < 0) {
            cout << "quarto" << endl; // Fourth quadrant
        }
    }
    
    return 0;
}
