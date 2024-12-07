#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


	
	struct info
	{
	int matricula;	
	float nota1;
	float nota2;
	
	};
	
	int main ()
	{
		info aluno;
		
		cin >> aluno.matricula;
		cin >> aluno.nota1;
		cin >> aluno.nota2;
		
		
		cout << fixed << setprecision (2); 
		cout << "Matricula do aluno: " << aluno.matricula << endl;
		cout << "Nota da primeira prova: " << aluno.nota1 << endl;
		cout << "Nota da segunda prova: " << aluno.nota2 << endl;
		
		
    return 0;
	}