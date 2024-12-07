#include <iostream>
#include <iomanip>  // Para formatar a saída com precisão decimal
#include <vector>   // Para usar std::vector

using namespace std;

// Função que calcula a média das notas
float media(const vector<int>& notas) {
    int soma = 0;
    for (int nota : notas) {
        soma += nota;
    }
    return static_cast<float>(soma) / notas.size();  // Conversão para float para evitar truncamento
}

int main() {
    int N;
    // Lê o número de alunos
    cin >> N;

    // Verifica se o número de alunos está dentro do limite
    if (N <= 0 || N > 100) {
        cout << "Número de alunos fora do intervalo permitido." << endl;
        return 1;
    }

    vector<int> notas(N);
    // Lê as notas dos alunos
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    // Calcula e exibe a média com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media(notas) << endl;

    return 0;
}
