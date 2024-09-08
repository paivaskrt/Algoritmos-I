#include <iostream>   // Inclui a biblioteca para entrada e sa�da padr�o
#include <iomanip>    // Inclui a biblioteca para manipula��o da formata��o de sa�da
#include <cmath>      // Inclui a biblioteca para fun��es matem�ticas (neste caso, n�o � utilizada, mas � comum inclu�-la para opera��es matem�ticas)

using namespace std;  // Permite o uso de nomes como 'cin' e 'cout' sem precisar usar 'std::' antes

int main() {
    // Declara��o das vari�veis do tipo double para armazenar o valor do dinheiro, pre�o e troco
    double dinheiro;
    double preco;
    double troco;
    
    // Leitura do valor dispon�vel de dinheiro (entrada do usu�rio)
    cin >> dinheiro;
    
    // Leitura do valor do pre�o do produto (entrada do usu�rio)
    cin >> preco;
    
    // C�lculo do troco, subtraindo o pre�o do valor dispon�vel de dinheiro
    troco = dinheiro - preco;
    
    // Exibi��o do troco calculado, formatado com 2 casas decimais
    // 'fixed' for�a a exibi��o do n�mero em ponto flutuante (decimal)
    // 'setprecision(2)' define que o n�mero ser� exibido com 2 casas decimais
    cout << "TROCO = " << fixed << setprecision(2) << troco << endl;
    
    // Retorno 0 indica que o programa foi executado com sucesso
    return 0;
}