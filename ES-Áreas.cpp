#include <iostream>   // Inclui a biblioteca para entrada e saída padrão
#include <iomanip>    // Inclui a biblioteca para manipulação da formatação de saída
#include <cmath>      // Inclui a biblioteca para funções matemáticas, como pow

using namespace std;  // Permite o uso de nomes como 'cin' e 'cout' sem precisar usar 'std::' antes

int main() {
    // Declaração de variáveis do tipo float para armazenar os valores de a, b e c
    float a, b, c;
    
    // Leitura dos valores de a, b e c a partir da entrada padrão (normalmente o teclado)
    cin >> a >> b >> c;
    
    // Cálculo das áreas das figuras geométricas:
    // Área do triângulo: (base * altura) / 2
    float triangulo = (a * c) / 2;
    
    // Área do círculo: pi * raio^2
    // Aqui, o valor de pi é 3.14159 e a função pow(c, 2) calcula c^2
    float circulo = 3.14159 * pow(c, 2);
    
    // Área do trapézio: ((base maior + base menor) * altura) / 2
    float trapezio = ((a + b) * c) / 2;
    
    // Área do quadrado: lado^2
    // Aqui, o lado é representado por b, e pow(b, 2) calcula b^2
    float quadrado = pow(b, 2);
    
    // Área do retângulo: base * altura
    float retangulo = a * b;
    
    // Configuração da formatação da saída para mostrar 3 casas decimais
    cout << fixed << setprecision(3);
    
    // Exibição das áreas calculadas, cada uma com seu respectivo nome e valor formatado
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    
    // Retorno 0 indica que o programa foi executado com sucesso
    return 0;
}