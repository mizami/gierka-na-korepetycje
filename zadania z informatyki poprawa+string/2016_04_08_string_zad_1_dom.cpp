// z pliku pobieramy stringi , liczymy ilosc zdan,ilosc wyraz�w w kazdym zdaniu i sredni� ilosc wyraz�w w zdaniu
// dla kadzego zdania wyswietlamy informacje:nr zdania,liczba wyraz�w w nim zawarta
//na koncu programu wyswietlamy srednia
// osobna funkcja na sprawdzanie obecno�ci kropki w pobranym stringu
// zak�adamy, �e w zdania w pliku s� zapisane poprawnie

#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	int liczba_zdan=0,liczba_slow=0,srednia=0;
	fstream zadanie;
	zadanie.open("zaddom1.txt",ios::out);
	if (plik.good())
	{
		while(!zadanie.eof())
		{
			if(liczba_zdan!=1)
			{
				liczba_slow++
				if(zdanie==.)
				{
					liczba_zdan++;
					cout<<"w zdaniu "<<liczba_zdan<<" jest "<<liczba_slow<<" slow."<<endl;
					liczbaslow=0;
				}
			}
			else
			{
				liczba_slow++
				if(zdanie==.)
				{
					liczba_zdan++;
					cout<<"w zdaniu "<<liczba_zdan<<" jest "<<liczba_slow<<" slow."<<endl;
					liczba_slow=0;
				}	
			}
		}
	}
		zadanie.close();
		system ("PAUSE");
		return 0;	
}
