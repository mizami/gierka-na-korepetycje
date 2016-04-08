#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
 string wyraz; //string potrafi przeczowa� dowolny ci�g znak�w
cout<<"podaj ciag znakow: ";
//cin>>wyraz; // do spacji tylko czyta
//getline(cin,wyraz); // czyta z bialymi znakami
cout<<wyraz<<endl;

wyraz="klawiatura";

char z; // "" <---pusty ci�g znak�w
z=wyraz.at(3); //znak z 3 kom�rki czyli dla nas 4 bo zaczynaj� sie indeky od 0
cout<<"z = "<<z<<endl;
//-------------------------------------------------------------------------

bool pusty;
pusty=wyraz.empty();

if (pusty)
 cout<<"ci�g jest pusty"<<endl;
 else
 cout<<"ciag nie jest pusty"<<endl;

//--------------------------------------------------------------------------
int ilosc;
ilosc=wyraz.length();
cout<<"ilosc znakow = "<<ilosc<<endl; // zwraca z ilu znak�w sk�ada sie ci�g
ilosc=wyraz.size();
cout<<"ilosc znakow = "<<ilosc<<endl;
//--------------------------------------------------------------------------
wyraz.resize(15);//ingerujemy w znak-zmieniamy dlugosc
cout<<wyraz<<endl;//ale miejsca s� wype�nione spacjami
wyraz.resize(20,'&');//wype�nienie ze znakami
cout<<wyraz<<endl;
//---------------------------------------------------------------------------
wyraz.clear();//zerujemy znak
cout<<wyraz<<endl;
wyraz="klawiatura";
wyraz.resize(0);
cout<<"wyraz = "<<wyraz<<endl;
//---------------------------------------------------------------------------
wyraz="klawiatura";
string s1;

s1=wyraz.substr(5,3);//wycinamy ze stringa znaki od kom�rki 5 a 3 to liczba znak�w
cout<<"s1 = "<<s1<<endl;
//----------------------------------------------------------------------------

//copy
char cn[100]={0};
wyraz="klawiatura";
wyraz.copy(cn,6,3); // 1-tablica do kt�rej kopiujemy 2- ile znak�w 3 od kt�rego znaku
cout<<"cn = "<<cn<<endl; //kopiowane znaki: wiatur
ilosc=wyraz.copy(cn,6,3);
cout<<"ilosc znakow skopiowanych = "<<ilosc<<endl;
//-----------------------------------------------------------------------------
//insert
s1="mama";
string s2="plastyka";
s1.insert (2,s2);//wstawiamy do s1 parametr 1- od kt�rego miejsca wstawiamy par 2co wstawiamy
cout<<"s1 = "<<s1<<endl;//wychodzi maplastyka
//insert 3 parametry
s1="mama";
char s3[]="plastyka";
s1.insert(2,s3,3);//ma|pla|parametr 1-odk�d 2 co wstawiamy 3 ile wstawiamy
cout<<"s1(w 3 parametrach) = "<<s1<<endl;
//instert 4 parametry
s1="mama";
 s2="plastyka";
s1.insert(2,s2,3,4);//parametr 1-odk�d w s1; 2-co wstawiamy; 3-od kt�rego miejsca w s2; 4-ile znak�w
cout<<"s1(w 4 parametrach) = "<<s1<<endl;
system ("PAUSE");
 return 0;
}
