#include <iostream>
using namespace std;

int main() {
    int x, y;

    // Leitura inicial dos valores de X e Y
    cin >> x >> y;

    // Loop até que X e Y sejam iguais
    while (x != y) {
        if (x < y) {
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
        
        // Leitura dos próximos valores
        cin >> x >> y;
    }

    return 0;
}
