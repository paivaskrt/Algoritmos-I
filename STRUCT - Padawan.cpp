#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Padawan {
    string nome;
    int pontos;
};

int main() {
    int n;
    cin >> n; // Número de Padawans
    cin.ignore(); // Ignorar o '\n' após o número de Padawans

    vector<Padawan> padawans(n); // Vetor para armazenar os Padawans
    int maiorPontos = -1;
    string melhorPadawan;
    double somaPontos = 0.0;

    for (int i = 0; i < n; ++i) {
        getline(cin, padawans[i].nome); // Nome do Padawan
        cin >> padawans[i].pontos;     // Pontos do Padawan
        cin.ignore(); // Ignorar o '\n' após os pontos

        somaPontos += padawans[i].pontos;

        if (padawans[i].pontos > maiorPontos) {
            maiorPontos = padawans[i].pontos;
            melhorPadawan = padawans[i].nome;
        }
    }

    double media = somaPontos / n;

    cout << "Padawan com mais pontos: " << melhorPadawan << endl;
    cout << "Pontos: " << maiorPontos << endl;
    cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos" << endl;

    return 0;
}
