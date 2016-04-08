#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <cstdio>
#include <fstream>
using namespace std;



int main()
{ 
  
  ifstream inFilenowe, inFileslowa;
  ofstream outFile;
  
  inFilenowe.open("nowe.txt");
  inFileslowa.open("slowa.txt");
  
  outFile.open("zadanie5_2pp.txt");
  
  string slowo;
  string nowe[26];
  string slowa[1001];
  
  int i=1;
  while(inFilenowe>>nowe[i])
   i++; //cout<<nowe[i]<<endl;  
  
  i=1;
  while(inFileslowa>>slowa[i])
   i++; //cout<<nowe[i]<<endl;  
  
  int licznik=0;
  
  for(i=1;i<26;i++)
  {
   licznik=0;  
   for(int j=1;j<1001;j++)
     if(nowe[i]==slowa[j])
       licznik++;
   outFile<<nowe[i]<<"  "<<licznik<<endl;
  }
  system("pause");
  return 0;
 }
