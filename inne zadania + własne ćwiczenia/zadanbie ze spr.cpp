#include <iomanip>
#include <iostream>

using namespace std;

void funkcja (long long n)
{
	long long zapas=n;
	int pierwsza=0,dlugosc=0,ostatnia=0,iloczyn,suma=0;
	while(n>0)
	{
		n/=10;
		dlugosc++;
		if(n>=1)
			pierwsza=n%10;
	}
	
	n=zapas;
	ostatnia=n%10;
	n/=10;
	
	while(n>0)
	{	
		
		if(n>pierwsza)
			suma+=n%10;
			n/=10;
	}
	
	iloczyn=pierwsza*ostatnia;
	
	cout<<"iloczyn = "<<iloczyn<<endl;;
	cout<<"suma = "<<suma<<endl;
	
	if(suma>iloczyn)
		cout<<"suma jest wieksza"<<endl;
	else
		cout<<"iloczyn jest wiekszy"<<endl;	
}

int main()
{
	long long n;
	cout<<"podaj n: ";
	cin>>n;
	funkcja (n);
	
	system ("PAUSE");
	return 0;
}
