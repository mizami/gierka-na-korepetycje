// pobieramy liczbe N-cyfrow¹ i zapisujemy do stringa, nastêpnie podnosimy j¹ do kwadratu i wyswietlamy
// nale¿y wykorzystaæ wskaŸniki i jeœli to mo¿liwe i sensowne utworzyæ osobne funkcje
// wykorzystaæ mno¿enie pisemne

#include <iomanip>
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
	string liczba,zapas,liczba2,mnozenie,wynik;//liczba-pocz¹tkowa liczba,liczba2-mno¿ymy przesz ni¹,mnozenie-pomnozenie przesz 1 cyfre z liczby,wynik-koncowy wynik
	cout<<"podaj liczbe: ";
	cin>>liczba;
	cout<<endl;
	zapas=liczba;
	liczba2=liczba;
	int ilosc=0,dlugosc=0,sterowanie=0,nowa_dlugosc=0;//ilosc-wartosc do zmian dlugosci  liczby2,dlugosc-wartosc do zmian dlugosci liczby,sterowanie-zlicza obroty pêtli,nowa dlugosc-zmienna dlugosci cyfry mnozonej 
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


