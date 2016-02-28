#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

void plansza(int mapa[6][6])
{
	srand (time(NULL));
	int x=rand()%6,y=rand()%6,x1=rand()%6,y1=rand()%6;
	
	/*for(int i=0;i<6;i++)
	{
		for(int y=0;y<6;y++)
		
		{
			
			cout<<a[i][y];
		}
		cout<<endl;
		
	}
*/
	mapa[x][y]=1;//wyjscie
	while(x1==x && y1==y)
	{
		x1=rand()%6;
		y1=rand()%6;
	}
	mapa[x1][y1]=-1;//postac
	
	
}

void sterowanie (int mapa[6][6])
{
	for(int i=101;i=0;i--)
	{
		cout << "Mozesz pojsc:\n";
		if(y!=0)
		{
			cout<<"   w gore\n";
		}
		if(y!=6)
		{
			cout<<"   w dol\n";
		}
		if(x!=0)
		{
			cout<<"   w lewo\n";
		}
		if(x!=6)
		{
			cout<<"   w prawo\n";
		}
		char c;
		cout<<"gdzie sie udasz?: "<<endl;
		switch(c){
			case "w":{
				// modyfikacja pozycji
				break;
			}
			case "s":{
				
				break;
			}
			case "a":{
				
				break;
			}
			case "d":{
				
				break;
			}
			default:{
				while (c!="w" ||c!="s" ||c!="a" || c!="d")
		{
			cout<<"przeczytaj sterowanie i wykonaj ruch ponownie: ";
			cin>>c;
		}
				break;
			}
		}
		cout<<"wykonalo "<<i<<" akcji";
		cin>>c;
		
		
		if (i==0)
			cout<<"przegrales"<<endl;
	}
}


int main()
{
	cout<<"witaj w grze!!!!"<<endl<<"gra polega na wyjsciu z labiryntu LECZ GO NIE WIDZISZ!!!!!"<<endl<<endl;
	cout<<"intrukcja: "<<endl<<"poruszasz sie klawiszami wsad (w-gora,s-dol,a-lewo,d-prawo) MASZ 100 RUCHÓW"<<endl<<endl<<"powodzenia!!!";
	
	int mapa[6][6]={0},wyjscie=0;//c-parametr uzywany do sterowania,b-liczy liczbe ruchów
	plansza(mapa);
	sterowanie();
	system ("PAUSE");
	return 0;
}

