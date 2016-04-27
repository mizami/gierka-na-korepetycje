
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream hasla;  // odpowiednik cin
	ofstream wynik_a,wynik_b,wynik_c,wynik_d;  // odpowiednik cout
	
	hasla.open("hasla.txt");
	wynik_a.open("wynik_4a.txt");
	wynik_b.open("wynik_4b.txt");
	wynik_c.open("wynik_4c.txt");
	wynik_d.open("wynik_4d.txt");
	
	int parzyste=0, nieparzyste=0;
	
	if (hasla.good() && wynik_a.good() && wynik_b.good() && wynik_c.good() && wynik_d.good())
	{
		while(!hasla.eof())
		{
			string haslo;
			hasla>>haslo;
			int dlugosc=haslo.size();
			bool czy_inne,czy_takie_same,czy_220=false;
			
			for(int i=0;i<dlugosc-1;i++)
			{
				for(int y=i+1;y<dlugosc;y++)	
				{
					if(haslo.at(i)!=haslo.at(y))
						czy_inne=true;
					else
					{
						czy_inne=false;
						break;
					}
				}
				if(!czy_inne)
					break;
			}
			
			if (czy_inne)
				wynik_b<<haslo<<endl;
				
			for(int i=0; i<dlugosc-1;i++)
			{
				if(((int) haslo.at(i)) + ((int)haslo.at(i+1)) == 220)
				{
					czy_220=true;
					break;
				}
			}
			
			if(czy_220)
				wynik_d<<haslo<<endl;
			
				
			for (int i=0, y=dlugosc-1;i<dlugosc-1;i++,y--)
			{
				if(haslo.at(i)==haslo.at(y))
					czy_takie_same=true;
				else
				{
					czy_takie_same=false;
					break;
				}
			}
			
			if(czy_takie_same)
				wynik_c<<haslo<<endl;
				
			
			if (dlugosc%2==0)
				parzyste++;
			else
				nieparzyste++;
				
			
		}
	}
	
	wynik_a<<"nieparzyste: "<<nieparzyste<<endl;
	wynik_a<<"parzyste: "<<parzyste<<endl;
	
	hasla.close();
	wynik_a.close();
	wynik_b.close();
	wynik_c.close();
	wynik_d.close();
	
//	system ("PAUSE"); //tylko jak coœwyœwietlam w konsoli
	return 0;
}

