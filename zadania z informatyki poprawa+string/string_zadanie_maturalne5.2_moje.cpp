#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	fstream wynik;									//tworzymy zmienn� plikow�-do obs�ugi pliku
	wynik.open("wynik51.txt", ios::out);			//otwieramy plik-wynik51
	fstream plik;									//tworzymy zmienn� plikowa
	plik.open("nowe.txt", ios::in);					//otwieramy plik
	if(plik.good())									//sprawdzamy czy plik jest otwarty poprawnie
	{
		while(!plik.eof())							//p�tla dzia�a dop�ki kursor pliku nie jest na ko�cu
		{
			int licznik=0, licznik_odwrotny=0;		//zmienne do liczenia wartosci
			string wyraz;							//przechowuje wyraz z pliku nowe
			plik>>wyraz;							//pobieramy wyraz z pliku
			if(wyraz.empty())						//jesli zdarzy sie pusty wyraz
				continue;							//pomijamy kolejne instrukcje i rozpoczynamy nowy obr�t p�tli
				
			fstream plik2;
			plik2.open("slowa.txt", ios::in);
			if(plik2.good())
			{
				while(!plik2.eof()) 				// przechodzi po kolejnych s�owach pliku slowa.txt a�� do ko�ca
				{
					string wyraz2;
					plik2>>wyraz2;
					if(wyraz == wyraz2)				//porownanie wyraz�w		
					{
						licznik++;
					}
					reverse(wyraz2.begin(),wyraz2.end());//odwr�cenie element�w pliku slowa
					if(wyraz == wyraz2)
					{
						licznik_odwrotny++;
					}					
				}
				plik2.close();							//zamkni�cie pliku				
			}
			wynik<<wyraz<<" "<<licznik<<" "<<licznik_odwrotny<<endl;
		}
	}
	plik.close();
	system ("PAUSE");
	return 0;
}
