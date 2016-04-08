#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	fstream wynik;									//tworzymy zmienn¹ plikow¹-do obs³ugi pliku
	wynik.open("wynik51.txt", ios::out);			//otwieramy plik-wynik51
	fstream plik;									//tworzymy zmienn¹ plikowa
	plik.open("nowe.txt", ios::in);					//otwieramy plik
	if(plik.good())									//sprawdzamy czy plik jest otwarty poprawnie
	{
		while(!plik.eof())							//pêtla dzia³a dopóki kursor pliku nie jest na koñcu
		{
			int licznik=0, licznik_odwrotny=0;		//zmienne do liczenia wartosci
			string wyraz;							//przechowuje wyraz z pliku nowe
			plik>>wyraz;							//pobieramy wyraz z pliku
			if(wyraz.empty())						//jesli zdarzy sie pusty wyraz
				continue;							//pomijamy kolejne instrukcje i rozpoczynamy nowy obrót pêtli
				
			fstream plik2;
			plik2.open("slowa.txt", ios::in);
			if(plik2.good())
			{
				while(!plik2.eof()) 				// przechodzi po kolejnych s³owach pliku slowa.txt a¿œ do koñca
				{
					string wyraz2;
					plik2>>wyraz2;
					if(wyraz == wyraz2)				//porownanie wyrazów		
					{
						licznik++;
					}
					reverse(wyraz2.begin(),wyraz2.end());//odwrócenie elementów pliku slowa
					if(wyraz == wyraz2)
					{
						licznik_odwrotny++;
					}					
				}
				plik2.close();							//zamkniêcie pliku				
			}
			wynik<<wyraz<<" "<<licznik<<" "<<licznik_odwrotny<<endl;
		}
	}
	plik.close();
	system ("PAUSE");
	return 0;
}
