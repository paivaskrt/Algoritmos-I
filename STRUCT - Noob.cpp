#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


	
	struct dados
	{
	int matricula;	
	float nota1;
	float nota2;
	double media;
	
	};
	
	int main ()
	{
		dados aluno;
		cin >> aluno.matricula;
		cin >> aluno.nota1;
		cin >> aluno.nota2;
		
		aluno.media = (2*aluno.nota1 + 3*aluno.nota2) / 5;
		
		cout << fixed << setprecision(2);
		cout << "Matricula do aluno: " << aluno.matricula << endl;
		cout << "Nota da primeira prova: " << aluno.nota1<< endl;
		cout << "Nota da segunda prova: " << aluno.nota2 << endl;
		cout << "Media: " << aluno.media << endl;
		
		
    return 0;
	}