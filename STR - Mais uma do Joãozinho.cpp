#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int numAlunos;
	cin >> numAlunos;
	cin.ignore();

	for (int i = 0; i < numAlunos; i++)
	{
		string nome;
		getline(cin, nome);

		double n1, n2, n3, n4;
		cin >> n1 >> n2 >> n3 >> n4;
		cin.ignore();


		double media = (n1 + 2 * n2 + 3 * n3 + 4 * n4) / 10.0;

		cout << fixed << setprecision(2);
		cout << nome << ": " << media << endl;
	}

	return 0;
}

