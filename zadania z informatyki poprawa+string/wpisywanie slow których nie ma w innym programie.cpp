#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	fstream wynik;									//tworzymy zmienn� plikow�-do obs�ugi pliku
	wynik.open("slowa2.txt", ios::out);			//otwieramy plik-wynik51
	fstream plik;									//tworzymy zmienn� plikowa
	plik.open("slowa.txt", ios::in);					//otwieramy plik
	if(plik.good())									//sprawdzamy czy plik jest otwarty poprawnie
	{
		while(!plik.eof())							//p�tla dzia�a dop�ki kursor pliku nie jest na ko�cu
		{
			string wyraz;							//przechowuje wyraz z pliku nowe
			plik>>wyraz;							//pobieramy wyraz z pliku
			if(wyraz.empty())						//jesli zdarzy sie pusty wyraz
				continue;							//pomijamy kolejne instrukcje i rozpoczynamy nowy obr�t p�tli
				
			fstream plik2;
			plik2.open("nowe.txt", ios::in);
			if(plik2.good())
			{
				bool prawda=true;
				while(!plik2.eof()) 				// przechodzi po kolejnych s�owach pliku slowa.txt a�� do ko�ca
				{	
					string wyraz2;
					plik2>>wyraz2;
					if(wyraz == wyraz2)				//porownanie wyraz�w		
					{
						prawda=false;
						break;
					}			
				}
				if(prawda)
				{
					wynik<<wyraz<<endl;
				}
				plik2.close();							//zamkni�cie pliku				
			}
		}
	}
	plik.close();
	system ("PAUSE");
	return 0;
}
