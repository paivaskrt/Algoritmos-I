#include <iostream>
#include <string>
#include <vector> // Para o uso de vetor
using namespace std;

struct dados {
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};

// Função para encontrar o índice do vencedor
int strongest(const vector<dados>& atletas) {
    int vencedor = 0;
    int maiorPontuacao = 0;

    for (int i = 0; i < atletas.size(); i++) {
        int total = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        if (total > maiorPontuacao) {
            maiorPontuacao = total;
            vencedor = i;
        }
    }

    return vencedor;
}

int main() {
    int nAtletas;
    cin >> nAtletas;

    vector<dados> atletas(nAtletas); // Usando vetor para armazenar os atletas

    // Leitura dos dados
    for (int i = 0; i < nAtletas; i++) {
        cin.ignore(); // Ignorar quebra de linha pendente
        getline(cin, atletas[i].nome);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }

    // Encontrar o índice do vencedor
    int vencedorIndex = strongest(atletas);

    // Exibir o nome do vencedor
    cout << "Vencedor: " << atletas[vencedorIndex].nome << endl;

    return 0;
}


