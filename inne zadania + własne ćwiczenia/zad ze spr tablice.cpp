#include <iomanip>
#include <iostream>

using namespace std;

void funkcja(long long liczba)
{
	long long zapas=liczba;
	int dlugosc=0,a[100]={0};
	
	while(liczba>0)
	{
		liczba/=10;
		dlugosc++;
	}
	
	liczba=zapas;
	
	for(int i=dlugosc;i>0;i--)
	{
		a[i]=liczba%10;
		liczba/=10;
	}
	
	liczba=zapas;
	
	for(int i=1;i<=dlugosc+ilosc;i++)
	{
		if(i==dlugosc+1)
			cout<<" ";
		else
		cout<<a[i];	
	}
}

int main()
{
	long long liczba;
	
	cout<<"podaj liczbe: ";
	cin>>liczba;
	
	funkcja (liczba);
	
	system ("PAUSE");
	return 0;
}
