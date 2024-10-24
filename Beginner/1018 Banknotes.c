#include <iostream>
using namespace std;

int main(){
    int t, a;   
    cin >> t;   
    cout << t <<"\n";
    cout << t/100 << " nota(s) de R$ 100,00\n";
    a = (t%100);
    cout << a/50 << " nota(s) de R$ 50,00\n";
    a = (a%50);
    cout << a/20 << " nota(s) de R$ 20,00\n";
    a = (a%20);
    cout << a/10 << " nota(s) de R$ 10,00\n";
    a = (a%10);
    cout << a/5 << " nota(s) de R$ 5,00\n";
    a = (a%5);
    cout << a/2 << " nota(s) de R$ 2,00\n";
    a = (a%2);
    cout << a/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
