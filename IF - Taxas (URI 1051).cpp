#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double renda, imposto, imposto1, imposto2;
	
	cin >> renda;
	
	cout << fixed << setprecision(2);
	
	if(renda > 4500)
	{
		imposto2 = ((renda - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
		cout << "R$ " << imposto2 << endl;
	}
		
	else if(renda > 3000 && renda <= 4500){
		imposto1 = ((renda - 3000) * 0.18) + (1000 * 0.08);
		cout << "R$ " << imposto1 << endl;
	}
	
	else if(renda > 2000 && renda <= 3000){
		imposto = ((renda - 2000) * 0.08);
		cout << "R$ " << imposto << endl;
	}
	
	else if(renda >= 0 && renda <= 2000)
		cout << "Isento" << endl;
	
return 0;
}