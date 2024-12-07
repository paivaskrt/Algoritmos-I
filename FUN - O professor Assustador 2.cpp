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

// Fun��o que conta quantos alunos t�m nota abaixo da m�dia
int nAbaixo(const vector<int>& notas, float media) {
    int count = 0;
    for (int nota : notas) {
        if (nota < media) {
            count++;
        }
    }
    return count;
}

// Fun��o que conta quantos alunos t�m nota acima da m�dia (inclui notas iguais � m�dia)
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

    // Calcula a m�dia da turma
    float mediaTurma = media(notas);

    // Conta quantos alunos t�m nota abaixo e acima da m�dia
    int abaixo = nAbaixo(notas, mediaTurma);
    int acima = nAcima(notas, mediaTurma);

    // Exibe a m�dia e os resultados
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaTurma << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;

    return 0;
}
