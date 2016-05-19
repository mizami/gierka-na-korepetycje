#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
	int ** a;
	a=new int * [10];
	for( int i=0;i<10;i++)
	{
		a[i]= new int [i+1];
		for(int j=0;j<=i;j++)
		{
				a[i][j]=3;
			
		cout << sizeof a[i] / sizeof *a[i];}
		cout<<endl;
	}
	system("PAUSE");
	return 0;	
}
