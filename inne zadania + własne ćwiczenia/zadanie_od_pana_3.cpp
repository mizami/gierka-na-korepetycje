//liczy sumê ka¿dej parycyfr w ilczbie ale przepisuje tylko liczbe jednosci 	12345 -> 1+2=3 ; 2+3=5 ; 3+4=7 ; 4+5=9 ; 5+1=6 -> 35796
//dla otrzymanej liczby ma policzyc sumê par z tego co wysz³o 					35796 -> 3+5=8 ; 7+9=(16)=6 ; 6 -> 866
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void funkcja_pary_par (int a[],int & dlugosc,int & dlugosc2)
{
	for(int i=dlugosc+1;i<=dlugosc*2;i+=2)//sumuje pary par
	{
		if(dlugosc%2 == 0 || dlugosc*2 != i)//sprawdzam czy cyfra nie jest ostatnia		NIE jest ostatnia SPRAWDZAÆ INDEKS NIE WARTOŒÆ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!	
			a[dlugosc*2+2+dlugosc2]=(a[i]+a[i+1])%10;//dodaje do siebie cyfry obok siebie
			
		else
		a[dlugosc*2+2+dlugosc2]=a[i]; //dodaje 1 i ostatnia cyfre
		dlugosc2++;
	}
}

//funkcja zlicza pary cyfr z pocz¹tkowej liczby i wpisuje jako liczbê pdo koniec tablicy
void funkcja_pary(int a[],int & dlugosc) //dlugosc 2 i dlugosc 1 przekazane referencj¹-zmiany s¹ globalne
{
	for(int i=0;i<dlugosc;i++)//sumuje pary
	{
		if(i!=dlugosc-1)//sprawdzam czy cyfra nie jest ostatnia		NIE jest ostatnia SPRAWDZAÆ INDEKS NIE WARTOŒÆ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!	
			a[dlugosc+i+1]=(a[i]+a[i+1])%10;//dodaje do siebie cyfry obok siebie
			
		else
		a[dlugosc+i+1]=(a[i]+a[0])%10; //dodaje 1 i ostatnia cyfre
	}
}

void funkcja_g(long long liczba) //funkcja g³ówna robi¹ca wiekszoœæ rzeczy w naszym programie
{
	int a[100]={0},dlugosc=0,dlugosc2=0;
	long long zapas=liczba;
	
	while(liczba>0)//liczymy dlugosc liczby
	{
		dlugosc++;//zwiekszanie dlugosci
		liczba/=10;//odcinanie ostatniej cyfry
	}
	
	liczba=zapas;//przywracamy liczbe do poprzedniej wartosci
	
	for(int i=dlugosc-1;i>=0;i--)//wstawiamy liczbe do tablicy
	{
		a[i]=liczba%10;//wstawiamy do komórki tablicy ostatni¹ cyfre
		liczba/=10; //odcinamy ostatnia cyfre
	}
	
	liczba=zapas;
	
	funkcja_pary(a,dlugosc);
	funkcja_pary_par(a,dlugosc,dlugosc2);
	for(int i=0;i<=dlugosc*2+1+dlugosc2;i++)//drukujemy
	{
		if(i==dlugosc || i==(dlugosc*2+1) )
			cout<<" ";
		else 
			cout<<a[i];
		
	}
	cout<<endl;
}

int main()
{
	
	long long liczba;
	cout<<"podaj liczbe: \n";
	cin>>liczba;
	while(liczba<10)
	{
		cout<<"liczba musi byæ wieksza od 9,podaj ja jeszcze raz: ";
		cin>>liczba;
	}
	funkcja_g(liczba);
	
	system ("PAUSE");
	return 0;
}

