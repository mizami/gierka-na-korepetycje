#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

void dodawanie(int *magazyn_jablek, int jakosc)
{
	int *magazyn_nowy=new int[magazyn_jablek [0]];
	for(int i=0;i<=magazyn_jablek[0];i++)
	{
		magazyn_nowy[i]=magazyn_jablek[i];
	}
	delete [] magazyn_jablek;
	
	magazyn_jablek = new int[magazyn_nowy[0]+2];
	for(int i=0;i<=magazyn_nowy[0];i++)
	{
		magazyn_jablek[i]=magazyn_nowy[i];
	}
	magazyn_jablek[0]++;
	magazyn_jablek[magazyn_jablek[0]]=jakosc;	
}

void usuwanie(int* magazyn_jablek)
{
	int *magazyn_nowy=new int[magazyn_jablek [0]];//.......................................................
	for(int i=0;i<=magazyn_jablek[0];i++)
	{
		magazyn_nowy[i]=magazyn_jablek[i];
	}
	delete [] magazyn_jablek;
	
	magazyn_jablek = new int[magazyn_nowy[0]];
	for(int i=0;i<magazyn_nowy[0];i++)
	{
		magazyn_jablek[i]=magazyn_nowy[i];
	}
	magazyn_jablek[0]--;
}

int main()
{
	cout<<"Oto magazyn jablek.\n"
		<<"na poczatek podaj liczbe jablek w magazynie, a potem zarzadzaj magazynem.\n";
	
	int ilosc_poczatkowa[4]={0}, **magazyn_jablek;
	magazyn_jablek=new int*[4];
	char c;
	
	cout<<"jablka zielone ";
	cin>>ilosc_poczatkowa[0];
	cout<<"jablka czerwone ";
	cin>>ilosc_poczatkowa[1];
	cout<<"jablka pomaranczowe ";
	cin>>ilosc_poczatkowa[2];
	cout<<"jab³ka rozowe ";
	cin>>ilosc_poczatkowa[3];
	
	for( int i=0;i<4;i++)
	{
		magazyn_jablek[i] = new int[ilosc_poczatkowa[i]+1];
		magazyn_jablek[i][0] = ilosc_poczatkowa[i];
		for(int j=1;j<=magazyn_jablek[i][0];j++)
		{
			magazyn_jablek[i][j]=rand()%5+1;
		}
	}
	
	for( int i=0;i<4;i++)
	{
		for(int j=1;j<=magazyn_jablek[i][0];j++)
		{
			cout<<magazyn_jablek[i][j];
		}
		cout<<endl;
	}
	
	do
	{
		cout<<"\nd-dodaj jablka\nu-usun jablka\nw-wyswietl ilosc jablek\nk-zakoncz program.\n"
			<<"co chcesz zrobiæ?:  ";
		cin >> c;
		switch(c)
		{	
			case 'd':
			{
				char b;
				int jakosc=0;
				cout<<"\njakie jablko chcesz dodac?\n"
					<<"z-zielone\nc-czerwone\np-pomaranczowe\nr-rozowe\n";
				cin>>b;
				cout<<"jakiej jakosci ma byc to jablko (1-5)";
				cin>>jakosc;
				switch(b)
				{
					case 'z':
					{
						dodawanie(magazyn_jablek[0],jakosc);
						break;
					}	
					case 'c':
					{
						dodawanie(magazyn_jablek[1],jakosc);
						break;
					}
					case 'p':
					{
						dodawanie(magazyn_jablek[2],jakosc);
						break;
					}	
					case 'r':
					{
						dodawanie(magazyn_jablek[3],jakosc);
						break;
					}	
					default:
						cout<<"nie ma takiego jablka";
						break;			
				}
				break;
			}
			case 'u':
			{
				char b;
				int jakosc=0;
				cout<<"\njakie jablko chcesz usunac?\n"
					<<"z-zielone\nc-czerwone\np-pomaranczowe\nr-rozowe\n";
				cin>>b;
				switch(b)
				{
					case 'z':
					{
						usuwanie(magazyn_jablek[0]);
						break;
					}
					case 'c':
					{
						usuwanie(magazyn_jablek[1]);
						break;	
					}
					case 'p':
					{
						usuwanie(magazyn_jablek[2]);
						break;	
					}
					case 'r':
					{
					usuwanie(magazyn_jablek[3]);
						break;	
					}
				}
			}
			case 'w':
			{
				for( int i=0;i<4;i++)
				{
					for(int j=1;j<=magazyn_jablek[i][0];j++)
						{
							cout<<magazyn_jablek[i][j]<<" ";
						}
					cout<<endl;
				}
				break;
			}
			default:
				cout<<"zly znak.\n";
				break;
		}
	}
	while(c!='k');
	
	system ("PAUSE");
	return 0;
}
