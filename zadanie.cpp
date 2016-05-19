#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

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
		cout<<"d-dodaj jablka\nu-usun jablka\nw-wyswietl ilosc jablek\nk-zakoncz program.\n"
			<<"co chcesz zrobiæ?: ";
		cin >> c;
		switch(c)
		{	
			case 'd':
			{
				char b;
				int jakosc=0;
				cout<<"jakie jablko chcesz dodac?\n"
					<<"z-zielone\nc-czerwone\np-pomaranczowe\nr-rozowe\n";
				cin>>b;
				cout<<"jakiej jakosci ma byc to jablko (1-5)";
				cin>>jakosc;
				switch(b)
				{
					case 'z':
					{
						int *magazyn_nowy=new int[magazyn_jablek [0][0]];//tworzymy zapasow¹ tablice dla wybranego magazynu
						for(int i=0;i<=magazyn_jablek[0][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[0][i];
						}
						delete [] magazyn_jablek[0];
						
						magazyn_jablek[0] = new int[magazyn_nowy[0]+2];
						for(int i=0;i<=magazyn_nowy[0][0];i++)
						{
							magazyn_jablek[0][i]=magazyn_nowy[i];
						}
						magazyn_jablek[0][0]++;
						magazyn_jablek[0][magazyn_jablek[0][0]]=jakosc;
						break;
					}	
					case 'c':
					{
						int *magazyn_nowy=new int[magazyn_jablek [1][0]];//tworzymy zapasow¹ tablice dla wybranego magazynu
						for(int i=0;i<=magazyn_jablek[1][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[1][i];
						}
						delete [] magazyn_jablek[1];
						
						magazyn_jablek[1] = new int[magazyn_nowy[1]+2];
						for(int i=0;i<=magazyn_nowy[1][0];i++)
						{
							magazyn_jablek[1][i]=magazyn_nowy[i];
						}
						magazyn_jablek[1][0]++;
						magazyn_jablek[1][magazyn_jablek[1][0]]=jakosc;
						break;
						break;
					}
					case 'p':
					{
						int *magazyn_nowy=new int[magazyn_jablek [2][0]];//tworzymy zapasow¹ tablice dla wybranego magazynu
						for(int i=0;i<=magazyn_jablek[2][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[0][i];
						}
						delete [] magazyn_jablek[0];
						
						magazyn_jablek[0] = new int[magazyn_nowy[2]+2];
						for(int i=0;i<=magazyn_nowy[2][0];i++)
						{
							magazyn_jablek[2][i]=magazyn_nowy[i];
						}
						magazyn_jablek[2][0]++;
						magazyn_jablek[2][magazyn_jablek[2][0]]=jakosc;
						break;
						break;
					}	
					case 'r':
					{
						int *magazyn_nowy=new int[magazyn_jablek [3][0]];//tworzymy zapasow¹ tablice dla wybranego magazynu
						for(int i=0;i<=magazyn_jablek[3][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[3][i];
						}
						delete [] magazyn_jablek[3];
						
						magazyn_jablek[3] = new int[magazyn_nowy[3]+2];
						for(int i=0;i<=magazyn_nowy[3][0];i++)
						{
							magazyn_jablek[3][i]=magazyn_nowy[i];
						}
						magazyn_jablek[3][0]++;
						magazyn_jablek[3][magazyn_jablek[3][0]]=jakosc;
						break;
						break;
					}	
					default:
						cout<<"nie ma takiego jablka"
						break;			
				}
				break;
			}
			case 'u':
			{
				char b;
				int jakosc=0;
				cout<<"jakie jablko chcesz usunac?\n"
					<<"z-zielone\nc-czerwone\np-pomaranczowe\nr-rozowe\n";
				cin>>b;
				switch(b)
				{
					case 'z':
					{
						int *magazyn_nowy=new int[magazyn_jablek [0][0]];
						for(int i=0;i<=magazyn_jablek[0][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[0][i];
						}
						delete [] magazyn_jablek[0];
						
						magazyn_jablek[0] = new int[magazyn_nowy[0]-1];
						for(int i=0;i<=magazyn_nowy[0][0];i++)
						{
							magazyn_jablek[0][i]=magazyn_nowy[i];
						}
						magazyn_jablek[0][0]++;
						magazyn_jablek[0][magazyn_jablek[0][0]]=jakosc;
						break;
					}
					case 'c':
					{
						int *magazyn_nowy=new int[magazyn_jablek [0][0]];
						for(int i=0;i<=magazyn_jablek[0][0];i++)
						{
							magazyn_nowy[i]=magazyn_jablek[0][i];
						}
						delete [] magazyn_jablek[0];
							
						magazyn_jablek[0] = new int[magazyn_nowy[0]-1];
						for(int i=0;i<=magazyn_nowy[0][0];i++)
						{
							magazyn_jablek[0][i]=magazyn_nowy[i];
						}
						magazyn_jablek[0][0]++;
						magazyn_jablek[0][magazyn_jablek[0][0]]=jakosc;
						break;	
					}
					case 'p':
					{
						
					}
					case 'r':
					{
						
					}
				}
			}
		}
	}
	while();
	
	system ("PAUSE");
	return 0;
}
