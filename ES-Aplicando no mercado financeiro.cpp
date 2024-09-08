#include <iostream>
#include <cmath> // para usar a fun��o pow
#include <iomanip> // para formatar a sa�da

int main() {
    double capital, taxa;
    int tempo;

    // Entrada
    std::cin >> capital >> taxa >> tempo;

    // Convertendo a taxa de juros para decimal
    taxa = taxa / 100;

    // Calculando o montante final usando a f�rmula do juro composto
    double montante = capital * pow((1 + taxa), tempo);

    // Calculando o lucro
    double lucro = montante - capital;

    // Sa�da formatada com duas casas decimais
    std::cout << "LUCRO = " << std::fixed << std::setprecision(2) << lucro << std::endl;

    return 0;
}