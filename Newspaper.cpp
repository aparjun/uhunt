#include <iostream>
#include <numeric>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{ 
	 string str;
	 float n; 	
	 char a;
	 int k,l,m,ar[500]={0},br[500]={0};
	 cin>>k;
	 for(int j=0;j<k;j++)
	 {
	 	cin>>a;
	 	l=a;
	 	cin>>m;
	 	ar[l]=m;
	 }
	 cin>>k;
	 getline(cin,str);
	 for(int j=0;j<k;j++)
	 {
	 	getline(cin,str);
	 	for(int f=0;f<str.size();f++)
	 	{
	 		a=str[f];
	 		if(a!=' ')
	 	    {
	 	     l=a;
	 	     br[l]++;
	 	    }
	 	}
	 }
	 for(int j=0;j<500;j++)
	 {
	  br[j]=br[j]*ar[j];
	 }
	 n=accumulate(br, br+500, 0);
	 n=n/100;
	 printf("%.2f",n);
	 cout<<"$"<<endl;
		i++;
	}
	return 0;
}
