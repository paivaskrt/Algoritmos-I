#include <iostream>
#include <string>
using namespace std;

int main ()
{
    
	string DDD;
	
	getline(cin >> ws, DDD);
	
	if (DDD == "Brasilia")
	cout << "61" << endl;
	
	else if (DDD == "Salvador")
	cout << "71" << endl;
	
	else if (DDD == "Sao Paulo")
	cout << "11" << endl;
	
	else if (DDD == "Rio de Janeiro")
	cout << "21" << endl;
	
	else if (DDD == "Juiz de Fora")
	cout << "32" << endl;
	
	else if (DDD == "Campinas")
	cout << "19" << endl;
	
	else if (DDD == "Vitoria")
	cout << "27" << endl;
	
	else if (DDD == "Belo horizonte")
	cout << "31" << endl;
	
	else if (DDD == "Santa Rita do Sapucai")
	cout << "35" << endl;
	
	else 
	cout << "DDD nao cadastrado" << endl;

    return 0;
}