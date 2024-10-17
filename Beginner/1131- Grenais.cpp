#include <iostream>
using namespace std;

int main() {
    int inter_wins = 0, gremio_wins = 0, draws = 0, total_grenais = 0;
    int inter_goals, gremio_goals;
    int response;

    do {
        cin >> inter_goals >> gremio_goals;
        
        if (inter_goals > gremio_goals) {
            inter_wins++;
        } else if (gremio_goals > inter_goals) {
            gremio_wins++;
        } else {
            draws++;
        }
        
        total_grenais++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> response;
        
    } while (response == 1);

    cout << total_grenais << " grenais" << endl;
    cout << "Inter:" << inter_wins << endl;
    cout << "Gremio:" << gremio_wins << endl;
    cout << "Empates:" << draws << endl;
    
    if (inter_wins > gremio_wins) {
        cout << "Inter venceu mais" << endl;
    } else if (gremio_wins > inter_wins) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}
