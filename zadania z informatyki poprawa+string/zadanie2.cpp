//program nei dzia³a dla liczb o nieparzystej dlugosci..
//nie do koñca rozumiem czemu ale sumuje wartoœc ostatniej cyfry z pierwsz¹ zsumowan¹
//zmiana indeksów nei pomaga wiêc nie wiem czym jest to spowodowane
#include <iomanip>
#include <iostream>

using namespace std;

void funkcja(long long liczba)
{
    long long zapas=liczba;
    int dlugosc=0,a[100]={0},c=0,numer=0;
 
    while(liczba>0)
    {
        liczba/=10;
        dlugosc++;      
    }   
 
    liczba=zapas;
 
    for(int i=dlugosc;i>0;i--)
    {
        a[i]=liczba%10;
        liczba/=10;   
    }
    
    liczba=zapas;
    
   
    for(int i=0;i<dlugosc;i+=2)
    {
        if(dlugosc%2==0)                           
          a[c+dlugosc+1]=a[i+1]+a[i+2];  
        else                                       // tutaj s¹ problemy
          if(i!=dlugosc-1)                    
                a[c+dlugosc+1]=a[i+1]+a[i+2];    //tutaj
            else                             
                {
            a[c+dlugosc+1]=a[dlugosc]+a[dlugosc];  //tutaj
            }
        c++;  
        numer++;
        cout<<c<<" "<<i<<" "<<numer<<" "<<dlugosc<<" "<<endl;
    }
    
    for(int i=1;i<dlugosc+1+numer;i++)
    {
        cout<<a[i]<<" "; 
        if(i==dlugosc)
            cout<<" ";
    }
    cout<<endl;
}

int main()
{
    long long liczba;
    cout<<"podaj liczbe n: ";
    cin>>liczba;
    
    funkcja (liczba);
    
    system ("PAUSE");
    return 0;   
}
