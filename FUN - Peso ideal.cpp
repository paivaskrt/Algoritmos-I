#include <iostream>
#include <iomanip>
#include <cctype>  // Para usar tolower()
using namespace std;

float pesoideal(float h, char sexo)
{
    float pi;

    // Converter sexo para minúsculo
    sexo = tolower(sexo);

    switch (sexo)
    {
        case 'm':
            pi = 72.7 * h - 58;
            break;
        case 'f':
            pi = 62.1 * h - 44.7;
            break;
        default:
            pi = 0; // Valor padrão para caso o sexo seja inválido
            break;
    }

    return pi;
}

int main ()
{
    float altura;  
    char sexo;
    float pi;
    
    cin >> altura >> sexo;

    pi = pesoideal(altura, sexo);

    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << pi << " kg" << endl;

    return 0;
}
