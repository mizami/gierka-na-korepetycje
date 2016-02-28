#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

struct polozenie
{
	int X;
	int Y;
}

void plansza(int mapa[6][6])
{
	srand (time(NULL));
	
	for(int i=0;i<6;i++)
	{
		for(int y=0;y<6;y++)
		
		{
			cout<<a[i][y];
		}
		cout<<endl;
	}
	postac=mapa[rand%10]
	
}

void sterowanie (int x,int b)
{
	cout<<"gdzie sie udasz?: "<<endl;
	for(int i=0;i<101;i++)
	{
		cout<<"wykonales "<<b<<" akcji";
		cin>>x;
		while (x>4)
		{
			cout<<"przeczytaj sterowanie i wykonaj ruch ponownie: ";
			cin>>x;
		}
		b++;
		if(b==100)
			cout<<"to twoja ostatnia akcja....jak ja wykorzystasz? ";
		if (b==101)
			cout<<"przegrales"<<endl;
	}
}


int main()
{
	cout<<"witaj w grze!!!!"<<endl<<"gra polega na wyjsciu z labiryntu LECZ GO NIE WIDZISZ!!!!!"<<endl<<endl;
	cout<<"intrukcja: "<<endl<<"poruszasz sie klawiszami 1234 (1-gora,2-dol,3 i 4 ruch w bok) MASZ 100 RUCHÓW"<<endl<<endl<<"powodzenia!!!";
	
	int x,b=0,int mapa[6][6]={0},postac=0,wyjscie=0;
	polozenie postac={4,2}, wyjscie, dziura;
	postac.X = 4;
	postac.Y = 2;
	
	plansza(mapa);
	sterowanie(x,b);
	system ("PAUSE");
	return 0;
}

