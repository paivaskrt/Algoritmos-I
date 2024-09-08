#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

int numero;
int horas;
float valor;
float salario;
// LENDO O NUMERO 


cin >> numero >> horas >> valor;
salario = horas * valor;

cout << fixed << setprecision (2);
cout << "NUMBER = " << numero << endl;
cout << "SALARY = U$ " << salario << endl;



return 0;
}