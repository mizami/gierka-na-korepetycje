#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string haslo;
	
	cin >> haslo;
	
	bool suma220 = false;
	for(int i=0; i<haslo.length()-1; i++){
		if(haslo[i] == haslo[i+1]){
			suma220 = true;
			break;
		}
	}
	
	if(suma220){
		cout << "suma 220\n";
	}
	
	bool palindrom = false;
	for(int i=0; i<haslo.length(); i++){
		if(haslo[i] == haslo[haslo.length()-1-i]){
			palindrom = true;
		}
		else{
			palindrom = false;
		}
	}
	
	if(palindrom){
		cout << "To jest palindrom.\n";
	}
	
	bool pojedyncze = true;
	for(int i=0; i<haslo.length() && pojedyncze; i++){
		for(int j=i+1; j<haslo.length(); j++){
			if(haslo[i] == haslo[j]){
				pojedyncze = false;
				break;
			}
		}
	}
	
	if(pojedyncze){
		cout << "bez powtorek\n";
	}
	else{
		cout << "z powtorkami\n";
	}
	
	return 0;
}
