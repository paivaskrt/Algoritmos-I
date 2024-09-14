#include <iostream>
#include <iomanip> // Para configurar a precisão da saída
using namespace std;


int main() {
    int N;
    cin >> N;

    double H = 0.0;

    // Calcula o valor de H somando os inversos de 1 até N
    for (int i = 1; i <= N; ++i) {
        H += 1.0 / i;
    }

    // Exibe o valor de H com 4 casas decimais
    cout << std::fixed << std::setprecision(4) << H << std::endl;

    return 0;
}