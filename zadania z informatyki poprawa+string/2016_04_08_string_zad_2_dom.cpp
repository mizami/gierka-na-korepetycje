// pobieramy liczbe N-cyfrow� i zapisujemy do stringa, nast�pnie podnosimy j� do kwadratu i wyswietlamy
// nale�y wykorzysta� wska�niki i je�li to mo�liwe i sensowne utworzy� osobne funkcje
// wykorzysta� mno�enie pisemne

#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

void dodawanie(string wynik, string mnozenie)
{
	
}

void potegowanie(string liczba,string wynik)
{
	int dlugosc = liczba.size();
	string mnozenie(dlugosc+1, '0');//string o 1 dluzszy od dlugosci wypelniony 0
	cout << mnozenie << mnozenie.size() << endl;
	for(int i = dlugosc-1; i >= 0; i--)//bierzemy ka�d� cyfre i wykonujemy mno�enie
	{
		// wycinamy z liczby string o d�ugo�ci 1 z pozycji i; c_str() konwertuje na tablic� char; atoi zamienia na int
		cout << "for_zew"  << mnozenie << mnozenie.size() << endl;
		int cyfra = atoi(liczba.substr(i,1).c_str()); 
		int przeniesienie = 0;
		for(int y = dlugosc; y >= 0; y--)
		{
			cout << "for_wew" << mnozenie << mnozenie.size() << endl;
			int cyfra2 = atoi(liczba.substr(y,1).c_str()); //stoi przekszta�ca stringa w int
			int w = ((cyfra*cyfra2) % 10) + przeniesienie;
			char cos[1];
			sprintf(cos, "%d", w); //to_string konwertuje int na stringa 
			
			cout << mnozenie.size() << endl;
			mnozenie.replace(y,1,cos);
			przeniesienie = (cyfra*cyfra2)/10;
		}
		cout << mnozenie << endl;
	}
	
}

int main()
{
	string liczba;//liczba-pocz�tkowa liczba,liczba2-mno�ymy przesz ni�,mnozenie-pomnozenie przesz 1 cyfre z liczby,wynik-koncowy wynik
	cout<<"podaj liczbe: ";
	cin>>liczba;
	cout<<endl;
	string wynik(liczba.length()*2, '0');
	potegowanie(liczba,wynik);
	
	cout<<"wynik wynosi: "<<wynik<<endl;
}


