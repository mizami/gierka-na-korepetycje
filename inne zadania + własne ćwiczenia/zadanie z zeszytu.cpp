#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void funkcja_g(long long liczba)
{
	long long zapas=liczba,suma=0;
	int dlugosc=0,licznik=0,numer=0;
	while(liczba>0)//liczymy dlugosc
	{
		dlugosc++;
		liczba/=10;
	}
	
	liczba=zapas;
	int dlugosc2=dlugosc*2;
	
	while(dlugosc2>0)
	{
		if(numer%3==0)
		{
			licznik++;
			if(licznik%2!=0)
			{
				suma+=(liczba%10)*(liczba%10);					
			}
			else
				suma+=liczba%10;
		}
		liczba/=10;
		if(liczba==0)
			liczba=zapas;
		dlugosc2--;	
		numer++;
		cout<<dlugosc2<<" "<<licznik<<" "<<numer<<" "<<liczba<<" "<<suma<<endl;
	}
	cout<<suma<<endl;
}

int main()
{
	
	long long liczba;
	cout<<"podaj liczbe: ";
	cin>>liczba;
	funkcja_g(liczba);
	
	system ("PAUSE");
	return 0;
}
