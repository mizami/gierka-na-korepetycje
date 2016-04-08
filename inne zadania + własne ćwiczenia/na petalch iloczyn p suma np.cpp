#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

void liczenie(long long s)
{		
	int np=0,p=1;//np-nieparzyste p-partzyste
	while(s>0)//petla do dlugosci liczby
	{
	 	if( (s%10)%2==0 )
		{
			p*=s%10;
		}
		else
		{
			np+=s%10;
		
		}
		s/=10;
	}

	cout<<"suma nieparzystych: "<<np<<endl;
	cout<<"iloczyn parzystych: "<<p<<endl;
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
