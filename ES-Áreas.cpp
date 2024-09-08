#include <iostream>   // Inclui a biblioteca para entrada e sa�da padr�o
#include <iomanip>    // Inclui a biblioteca para manipula��o da formata��o de sa�da
#include <cmath>      // Inclui a biblioteca para fun��es matem�ticas, como pow

using namespace std;  // Permite o uso de nomes como 'cin' e 'cout' sem precisar usar 'std::' antes

int main() {
    // Declara��o de vari�veis do tipo float para armazenar os valores de a, b e c
    float a, b, c;
    
    // Leitura dos valores de a, b e c a partir da entrada padr�o (normalmente o teclado)
    cin >> a >> b >> c;
    
    // C�lculo das �reas das figuras geom�tricas:
    // �rea do tri�ngulo: (base * altura) / 2
    float triangulo = (a * c) / 2;
    
    // �rea do c�rculo: pi * raio^2
    // Aqui, o valor de pi � 3.14159 e a fun��o pow(c, 2) calcula c^2
    float circulo = 3.14159 * pow(c, 2);
    
    // �rea do trap�zio: ((base maior + base menor) * altura) / 2
    float trapezio = ((a + b) * c) / 2;
    
    // �rea do quadrado: lado^2
    // Aqui, o lado � representado por b, e pow(b, 2) calcula b^2
    float quadrado = pow(b, 2);
    
    // �rea do ret�ngulo: base * altura
    float retangulo = a * b;
    
    // Configura��o da formata��o da sa�da para mostrar 3 casas decimais
    cout << fixed << setprecision(3);
    
    // Exibi��o das �reas calculadas, cada uma com seu respectivo nome e valor formatado
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    
    // Retorno 0 indica que o programa foi executado com sucesso
    return 0;
}