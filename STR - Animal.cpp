#include <iostream>
#include <string>
using namespace std;
  
int main ()
{

	string p1;
	string p2;
	string p3;
	
	getline(cin >> ws, p1);
	getline(cin >> ws, p2);
	getline(cin >> ws, p3);
	
	if ( p1 == "vertebrado" && p2 == "ave" && p3 == "carnivoro")
	    cout << "aguia" << endl;
	
	else if ( p1 == "vertebrado" && p2 == "ave" && p3 == "onivoro")
	    cout << "pomba" << endl;
	
    else if ( p1 == "vertebrado" && p2 == "mamifero" && p3 == "onivoro")
        cout << "homem" << endl;
    
    else if ( p1 == "vertebrado" && p2 == "mamifero" && p3 == "herbivoro")
        cout << "vaca" << endl;
        
    else if ( p1 == "invertebrado" && p2 == "inseto" && p3 == "hematofago")
        cout << "pulga" << endl;
    
    else if ( p1 == "invertebrado" && p2 == "inseto" && p3 == "herbivoro")
        cout << "lagarta" << endl;
        
    else if ( p1 == "invertebrado" && p2 == "anelideo" && p3 == "hematofago")
        cout << "sanguessuga" << endl;
    
    else 
        cout << "minhoca" << endl;
        
	
	return 0;
}
