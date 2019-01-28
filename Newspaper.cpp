#include <iostream>
using namespace std;

int main()
{
	int t,i=0;
	while(i<t)
	{ 
	 char a;
	 int k,l,m,ar[127]={0},br[127]={0};
	 cin>>k;
	 for(int j=0;j<k;j++)
	 {
	 	cin>>a;
	 	l=a-'0';
	 	cin>>m;
	 	ar[l]=m;
	 }
	 cin>>k;
	 while(cin>>a)
	 {
	 	if(a!=' ')
	 	{
	 	  l=a-'0';
	 	  br[l]++;
	 	}
	 }
	 for(int j=0;j<127;j++)
	 {
	 	br[j]=br[j]*ar[j];
	 }
		i++;
	}
	return 0;
}
