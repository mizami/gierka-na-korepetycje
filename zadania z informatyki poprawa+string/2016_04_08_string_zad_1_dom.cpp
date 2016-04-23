// z pliku pobieramy stringi , liczymy ilosc zdan,ilosc wyrazów w kazdym zdaniu i sredni¹ ilosc wyrazów w zdaniu
// dla kadzego zdania wyswietlamy informacje:nr zdania,liczba wyrazów w nim zawarta
//na koncu programu wyswietlamy srednia
// osobna funkcja na sprawdzanie obecnoœci kropki w pobranym stringu
// zak³adamy, ¿e w zdania w pliku s¹ zapisane poprawnie

#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <string>

using namespace std;

bool czy_kropka(string wyraz)		//sprawdzamy czy kropka
{
	return wyraz.at(wyraz.size()-1) == '.';	//zwracamy fa³sz/prawda
}

int main()
{
	// deklarowanie zmiennych
	int liczba_zdan=0,liczba_slow=0;			//liczba_zdan=-liczy nam zdania,liczba_slow-liczy s³owa
	fstream zadanie;							//tworzymy zmienn¹ plikow¹
	double srednia=0.0; 							//srednia-liczy sredni¹ (double bo liczby po przecinku)
	zadanie.open("zaddom1.txt",ios::in);
	string wyraz;
	
	//sprawdzenie czy plik siê skoñczy³
	if(zadanie.good())
	{
	
		while(!zadanie.eof()) // pêtla id¹ca do konca pliku
		{		
				zadanie>>wyraz;	//pobieramy wyraz do stringa
				liczba_slow++;
				srednia+=1.0;
				
				if(czy_kropka(wyraz))		//sprawdzamy czy kropka (niepotrzebne == poniewa¿ bool
				{
					liczba_zdan++;
					cout<<"w zdaniu "<<liczba_zdan<<" jest "<<liczba_slow<<" slow."<<endl;
					liczba_slow=0;
				}

		}
	}
		srednia /= liczba_zdan;
		cout<<"srednia ilosc slow w zdaniu wynosi: "<<setprecision(2)<<fixed<<srednia<<endl;
		zadanie.close();  //zamykamy plik
		system ("PAUSE");
		return 0;	
}
