#include <iostream>
#include <cmath> // para usar a função pow
#include <iomanip> // para formatar a saída

int main() {
    double capital, taxa;
    int tempo;

    // Entrada
    std::cin >> capital >> taxa >> tempo;

    // Convertendo a taxa de juros para decimal
    taxa = taxa / 100;

    // Calculando o montante final usando a fórmula do juro composto
    double montante = capital * pow((1 + taxa), tempo);

    // Calculando o lucro
    double lucro = montante - capital;

    // Saída formatada com duas casas decimais
    std::cout << "LUCRO = " << std::fixed << std::setprecision(2) << lucro << std::endl;

    return 0;
}