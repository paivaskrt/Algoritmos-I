#include <iostream>
using namespace std;

int main() {
    int golsInter, golsGremio;
    int vitoriasInter = 0, vitoriasGremio = 0, empates = 0, grenais = 0;
    int opcao;

    do {
        // Leitura dos gols
        cin >> golsInter >> golsGremio;

        // Atualização das estatísticas
        grenais++;
        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        // Pergunta sobre novo GRENAL
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;

    } while (opcao == 1);

    // Impressão das estatísticas
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vitoriasInter << endl;
    cout << "Gremio:" << vitoriasGremio << endl;
    cout << "Empates:" << empates << endl;

    // Verifica quem venceu mais grenais
    if (vitoriasInter > vitoriasGremio) {
        cout << "Inter venceu mais" << endl;
    } else if (vitoriasGremio > vitoriasInter) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
