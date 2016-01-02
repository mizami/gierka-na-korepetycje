#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;
//program bierze podana liczbe i wypisuje co 2 cyfre
long long liczba (long long l)
{
		long long zapas;
		int a[100]={0},licznik=0,liczba_cyfr2=0,dlugosc_liczby=0,zapas_liczba_cyfr2;
		zapas=l;
	
	while (l>0)
	{
		l/=10;
		licznik++;
		if (licznik%2==0)
		{
			liczba_cyfr2++;
		}
		dlugosc_liczby++;
	}
	
	l=zapas;
	zapas_liczba_cyfr2=liczba_cyfr2;
	
	for (int i=dlugosc_liczby-1;i>=0;i--)
	{
		a[i]=l%10;
		if (i%2!=0)
		{
			a[dlugosc_liczby+liczba_cyfr2]=l%10;
			liczba_cyfr2--;
		}
		
		
		l/=10;
	}
	liczba_cyfr2=zapas_liczba_cyfr2;
	
	for (int i=0;i<=dlugosc_liczby+liczba_cyfr2;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main ()
{	
	long long l;
	cout<<"podaj liczbe: \n";
	cin>>l;
	liczba(l);
	
	system ("PAUSE");
	return 0;
}
