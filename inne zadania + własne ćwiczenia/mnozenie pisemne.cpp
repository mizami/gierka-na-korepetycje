#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

long long mnozenie (long long liczba1,long long liczba2)
{
	int a[100][100]={0};
	int dlugosc1=0,dlugosc2=0;
	long long zapas1,zapas2;
	
	zapas1=liczba1;
	zapas2=liczba2;
	
	while (liczba1>0)
	{
		liczba1/=10;
		dlugosc1++;
	}
	
	liczba1=zapas1;
	
	while (liczba2>0)
	{
		liczba2/=10;
		dlugosc2++;
	}
	
	liczba2=zapas2;
	
	int szerokosc=dlugosc1+dlugosc2-1;
	for(int i=szerokosc;i>=0;i--)
	{
		int pom;
		if(i>szerokosc-dlugosc1)
		{
			pom = liczba1%10;
			a[i][0] = pom;
		}
	//	else
	//		cout<<" ";

		if(i>szerokosc-dlugosc2)
		{
			pom = liczba2%10;
			a[i][1] = pom;
		}
	//	else
	//		cout<<" "
		liczba1/=10;
		liczba2/=10;
	}
	
	int wysokosc=dlugosc2+3;
	int b=szerokosc;
	int pam=0;
	
	for(int i=0;i<dlugosc2;i++)
	{
		
		for(int z=szerokosc;z>=0;z--)
		{
			int v=a[z][0]*a[b][1]+pam;
			if(v>=10)
			{
				a[z-i][i+2]=v%10;
				pam=v/10;
			}
			else
				a[z-i][i+2]=v;
		}
		b--; 
	}
	 
	for(int y=0;y<wysokosc;y++)
	{
		for(int x=0;x<=szerokosc;x++)
			cout<<a[x][y];
		cout<<endl;
	}

}

int main()
{
	long long liczba1,liczba2;
	cout<<"Podaj 1 liczbe do mnozenia: ";
	cin>>liczba1;
	cout<<"Podaj 2 liczbe do mnozenia: ";
	cin>>liczba2;
	mnozenie (liczba1,liczba2);
	system ("PAUSE");
	return 0;	
}
