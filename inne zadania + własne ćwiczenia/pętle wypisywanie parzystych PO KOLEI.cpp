#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void potegowanie(int dlugosc, long long & z)
{
	while(dlugosc>1)
	{
		z*=10;
		dlugosc--;
	}
}

void liczba(long long l)
{
	int cyfra=0,dlugosc=0;
	long long z=1;
	long long zapas=l;
		while(l>0)//petla do dlugosci liczby
	{
		dlugosc++;
		l/=10;
	}
	potegowanie (dlugosc,z);
	
	l=zapas;
	
	while(l>0)
	{
		cyfra+=(l%10)*z;	
		z/=10;
		l/=10;
	}
	
	cout<<"cyfra = "<<cyfra<<endl;
	
	while (cyfra>0)
	{
		if( (cyfra%10)%2==0)
			cout<<cyfra%10<<" ";
		cyfra/=10;
	}
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
