#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, media;
    int opcao;
    
    do {
        // Leitura da primeira nota
        do {
            cin >> n1;
            if (n1 < 0 || n1 > 10) {
                cout << "nota invalida" << endl;
            }
        } while (n1 < 0 || n1 > 10);

        // Leitura da segunda nota
        do {
            cin >> n2;
            if (n2 < 0 || n2 > 10) {
                cout << "nota invalida" << endl;
            }
        } while (n2 < 0 || n2 > 10);

        // Cálculo da média
        media = (n1 + n2) / 2;
        cout << "media = " << fixed << setprecision(2) << media << endl;

        // Solicitação de novo cálculo
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        } while (opcao != 1 && opcao != 2);

    } while (opcao == 1);

    return 0;
}
