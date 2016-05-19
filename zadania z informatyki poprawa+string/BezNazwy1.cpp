
#include <fstream>

using namespace std;

int main()
{
	ifstream zadanie;
	ofstream plik;
	
	zadanie.open("zadanie_spr_przygotowanie.txt");
	plik.open("odpowiedzi_gah");
	
	if(zadanie.good() && plik.good() )
	{
		while(zadanie.eof())
		{
			string wyraz,wyraz2;
			zadanie>>wyraz;
			int dlugosc=wyraz.size();		
			
			for(int i=0;i<dlugosc-3;i++)
			{
				if(wyraz.at(i)=='g')
				{
						if(wyraz.at(i+1)=='a')
						{
							if(wyraz.at(i+2)=='h')
							{
								if(dlugosc%2==0)
									wyraz2.at(i)=wyraz.at(dlugosc-1-i);	
								
								else
								{
									
								}
							}
						}
				}
			}
			
			
		}
	}
}
