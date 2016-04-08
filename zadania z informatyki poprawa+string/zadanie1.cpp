#include <iomanip>
#include <iostream>

using namespace std;

void funkcja(long long liczba)
{
 long long zapas=liczba;
 int min=99,max=1,suma=0;//minimalna parzysta max nieparzysta
 
 while(liczba>0)
 {
    if(liczba%2==0)
    {
		if(min>liczba%10)
            min=liczba%10;
    }
    else
    {
        if(max<liczba%10)
            max=liczba%10;
	}
               
    liczba/=10;    
    cout<<liczba<<" "<<min<<" "<<max<<endl;    
 }   
    suma=min+max;
    cout<<"min= "<<min<<endl;
    cout<<"max= "<<max<<endl;
    cout<<"suma= "<<suma<<endl;
    if(suma>8)
        cout<<"suma "<<suma<<" jest wieksza niz 8"<<endl;
    else
        cout<<"suma "<<suma<<"jest mniejsza od 8"<<endl;
}

int main()
{
 long long liczba;
 cout<<"podaj liczbe n: ";
 cin>>liczba;
    
 funkcja(liczba);
    
 system ("PAUSE");
 return 0;   
}
