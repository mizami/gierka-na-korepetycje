
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;
//np-nieparzyste
//p-parzyste
void liczenie(long long s)
{		
	int a[100]={0},zapas=0,dlugosc=0;
	zapas=s;
	while(s>0)//petla do dlugosci liczby
	{
		dlugosc++;
		s/=10;
	}

	s=zapas;
	
	a[dlugosc+3]=1;//musimy mno¿yæ z 1 a nie 0 ¿eby wynik mno¿enia nie wyszed³ 0
	
	for(int i=dlugosc-1;i>=0;i--)
	{
		a[i]=s%10; //do ka¿dej komórki 1 cyfra
	
		if (i%2==0) //mnozymy parzyste
		{
			a[dlugosc+3]*=s%10;
		}
		else //dodajemy nieparzyste
		{
			a[dlugosc+1]+=s%10;
		
		}
			s/=10;//odcinamy ostatnia
		
	}
	
	s=zapas;
	
	for(int i=0;i<=dlugosc+3;i++) // drukowanie
	{
		if(i==dlugosc || i==dlugosc+2)
			cout<<" ";
		else
			cout<<a[i];
	}
	cout<<endl<<endl;

	
}

int main()
{
	long long s;
	cout<<"podaj liczbe: "<<endl;
	cin>>s;
	liczenie(s);
	
	system ("PAUSE");
	return 0;
}
