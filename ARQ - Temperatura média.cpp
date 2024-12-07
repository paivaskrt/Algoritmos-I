#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Nome do arquivo
    string nomeArquivo;

    // Lê o nome do arquivo
    cin >> nomeArquivo;

    // Abre o arquivo
    ifstream arquivo(nomeArquivo);

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    // Variáveis para cálculo da média
    double temperatura, soma = 0.0;
    int contagem = 0;

    // Lê as temperaturas do arquivo
    while (arquivo >> temperatura) {
        soma += temperatura;
        contagem++;
    }

    // Fecha o arquivo
    arquivo.close();

    // Verifica se houve alguma leitura
    if (contagem == 0) {
        cerr << "O arquivo está vazio ou não contém valores válidos." << endl;
        return 1;
    }

    // Calcula e exibe a média com uma casa decimal
    double media = soma / contagem;
    cout << fixed << setprecision(1); 
    cout << "Temperatura media: " << media << " graus" << endl;

    return 0;
}