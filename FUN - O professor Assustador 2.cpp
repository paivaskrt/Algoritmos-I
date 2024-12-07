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

// Função que conta quantos alunos têm nota abaixo da média
int nAbaixo(const vector<int>& notas, float media) {
    int count = 0;
    for (int nota : notas) {
        if (nota < media) {
            count++;
        }
    }
    return count;
}

// Função que conta quantos alunos têm nota acima da média (inclui notas iguais à média)
int nAcima(const vector<int>& notas, float media) {
    int count = 0;
    for (int nota : notas) {
        if (nota >= media) {
            count++;
        }
    }
    return count;
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

    // Calcula a média da turma
    float mediaTurma = media(notas);

    // Conta quantos alunos têm nota abaixo e acima da média
    int abaixo = nAbaixo(notas, mediaTurma);
    int acima = nAcima(notas, mediaTurma);

    // Exibe a média e os resultados
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaTurma << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;

    return 0;
}
