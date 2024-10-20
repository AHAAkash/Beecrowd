#include <iostream>
using namespace std;

int main() {
    int distance;
    cin >> distance;

    int Speed = 30; 
    int time = (distance * 60) / Speed;
    
    cout << time << " minutos" << endl;

    return 0;
}
