
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

void liczenie(long long s)
{		
	int a[100]={0},zapas=0,dlugosc=0,np=0,p=1;//np-nieparzyste p-partzyste
	zapas=s;
	while(s>0)//petla do dlugosci liczby
	{
		dlugosc++;
		/**/
		s/=10;
	}

	s=zapas;
	
	
	for(int i=dlugosc;i>0;i--)
	{
		a[i]=s%10;
	
		if (i%2!=0)
		{
			p*=s%10;
		}
		else
		{
			np+=s%10;
		
		}
			s/=10;
		
	}
	
	s=zapas;
	
	for(int i=1;i<dlugosc+1;i++) // drukowanie
	{
		cout<<a[i];	
	}
	cout<<endl<<endl;
	
	cout<<"suma (indeksy) nieparzystych: "<<np<<endl;
	cout<<"iloczyn (indeksy) parzystych: "<<p<<endl;
	
	
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
