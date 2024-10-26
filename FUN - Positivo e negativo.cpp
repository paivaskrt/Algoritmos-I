#include <iostream>
using namespace std;

int sinal(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;
}

int main ()
{
	int n;
	int res;

	cin >> n;

	res = sinal(n);

	if(res == 1)
		cout << "Positivo";

	else if (res == -1)
		cout << "Negativo";

	else
		cout << "Zero";

	return 0;
}