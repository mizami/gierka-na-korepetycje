// pobieramy liczbe N-cyfrow� i zapisujemy do stringa, nast�pnie podnosimy j� do kwadratu i wyswietlamy
// nale�y wykorzysta� wska�niki i je�li to mo�liwe i sensowne utworzy� osobne funkcje
// wykorzysta� mno�enie pisemne

#include <iomanip>
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
	string liczba,zapas,liczba2,mnozenie,wynik;//liczba-pocz�tkowa liczba,liczba2-mno�ymy przesz ni�,mnozenie-pomnozenie przesz 1 cyfre z liczby,wynik-koncowy wynik
	cout<<"podaj liczbe: ";
	cin>>liczba;
	cout<<endl;
	zapas=liczba;
	liczba2=liczba;
	int ilosc=0,dlugosc=0,sterowanie=0,nowa_dlugosc=0;//ilosc-wartosc do zmian dlugosci  liczby2,dlugosc-wartosc do zmian dlugosci liczby,sterowanie-zlicza obroty p�tli,nowa dlugosc-zmienna dlugosci cyfry mnozonej 
	ilosc=liczba2.length();//zliczam dlugosc cyfry2 by potem zmieniac jej wartosc
	dlugosc=liczba.lenght();//zliczam dlugosc cyfry by zmieniac jej dlugosc
	
	while(ilosc>0)
	{	
		sterowanie++;
		liczba.resize(dlugosc-sterowanie);//zmieniam dlugosc 1 liczby by miec 1 cyfre
		nowa_dlugosc=ilosc-sterowanie;
		liczba2.resize(nowa_dlugosc)
		if (liczba==0)
			liczba=zapas;
		mnozenie=liczba*liczba2%10);
		wynik+=mnozenie;
	}
	cout<<"wynik wynosi: "<<wynik<<endl;
}


