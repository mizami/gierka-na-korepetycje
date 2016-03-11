#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	long long liczba,liczba2,zapas=0,drukowana=0;
	cout<<"podaj liczbe: ";
	cin>>liczba;
	zapas=liczba;
	liczba2=liczba;
	while (liczba>0)
	{
		
		if(liczba%2==0)
		{
		drukowana=liczba%10;
		cout<<drukowana;
		}
		liczba/=10;
	}

	system ("PAUSE");
	return 0;
}
