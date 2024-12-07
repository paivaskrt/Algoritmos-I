#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Nome do arquivo
    string nomeArquivo;

    // L� o nome do arquivo
    cin >> nomeArquivo;

    // Abre o arquivo
    ifstream arquivo(nomeArquivo);

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    // Vari�veis para c�lculo da m�dia
    double temperatura, soma = 0.0;
    int contagem = 0;

    // L� as temperaturas do arquivo
    while (arquivo >> temperatura) {
        soma += temperatura;
        contagem++;
    }

    // Fecha o arquivo
    arquivo.close();

    // Verifica se houve alguma leitura
    if (contagem == 0) {
        cerr << "O arquivo est� vazio ou n�o cont�m valores v�lidos." << endl;
        return 1;
    }

    // Calcula e exibe a m�dia com uma casa decimal
    double media = soma / contagem;
    cout << fixed << setprecision(1); 
    cout << "Temperatura media: " << media << " graus" << endl;

    return 0;
}