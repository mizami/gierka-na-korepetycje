#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	fstream wynik;									//tworzymy zmienn¹ plikow¹-do obs³ugi pliku
	wynik.open("slowa2.txt", ios::out);			//otwieramy plik-wynik51
	fstream plik;									//tworzymy zmienn¹ plikowa
	plik.open("slowa.txt", ios::in);					//otwieramy plik
	if(plik.good())									//sprawdzamy czy plik jest otwarty poprawnie
	{
		while(!plik.eof())							//pêtla dzia³a dopóki kursor pliku nie jest na koñcu
		{
			string wyraz;							//przechowuje wyraz z pliku nowe
			plik>>wyraz;							//pobieramy wyraz z pliku
			if(wyraz.empty())						//jesli zdarzy sie pusty wyraz
				continue;							//pomijamy kolejne instrukcje i rozpoczynamy nowy obrót pêtli
				
			fstream plik2;
			plik2.open("nowe.txt", ios::in);
			if(plik2.good())
			{
				bool prawda=true;
				while(!plik2.eof()) 				// przechodzi po kolejnych s³owach pliku slowa.txt a¿œ do koñca
				{	
					string wyraz2;
					plik2>>wyraz2;
					if(wyraz == wyraz2)				//porownanie wyrazów		
					{
						prawda=false;
						break;
					}			
				}
				if(prawda)
				{
					wynik<<wyraz<<endl;
				}
				plik2.close();							//zamkniêcie pliku				
			}
		}
	}
	plik.close();
	system ("PAUSE");
	return 0;
}
