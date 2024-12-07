#include <iostream>
#include <iomanip>  // Para formatar a sa�da com precis�o decimal
#include <vector>   // Para usar std::vector

using namespace std;

// Fun��o que calcula a m�dia das notas
float media(const vector<int>& notas) {
    int soma = 0;
    for (int nota : notas) {
        soma += nota;
    }
    return static_cast<float>(soma) / notas.size();  // Convers�o para float para evitar truncamento
}

int main() {
    int N;
    // L� o n�mero de alunos
    cin >> N;

    // Verifica se o n�mero de alunos est� dentro do limite
    if (N <= 0 || N > 100) {
        cout << "N�mero de alunos fora do intervalo permitido." << endl;
        return 1;
    }

    vector<int> notas(N);
    // L� as notas dos alunos
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    // Calcula e exibe a m�dia com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media(notas) << endl;

    return 0;
}
