#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variável para armazenar o nome do arquivo
    string nomeArquivo;

    // Lê o nome do arquivo
    cin >> nomeArquivo;

    // Cria e abre o arquivo em modo de escrita
    ofstream arquivoSaida(nomeArquivo);

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivoSaida) {
        cerr << "Erro ao criar o arquivo." << endl;
        return 1;
    }

    // Lê números reais e escreve no arquivo
    double numero;
    while (cin >> numero && numero != 0) {
        arquivoSaida << fixed << setprecision(2) << numero << " ";
    }

    // Fecha o arquivo de saída
    arquivoSaida.close();

    // Abre o arquivo em modo de leitura
    ifstream arquivoEntrada(nomeArquivo);

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivoEntrada) {
        cerr << "Erro ao abrir o arquivo para leitura." << endl;
        return 1;
    }

    // Lê e exibe o conteúdo do arquivo
    string linha;
    if (getline(arquivoEntrada, linha)) {
        cout << linha << endl;
    }

    // Fecha o arquivo de entrada
    arquivoEntrada.close();

    return 0;
}