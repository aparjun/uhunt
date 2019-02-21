#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		int ar[n][n];
		int m=10000000,x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			for(int j=n-1;j>=0;j--)
			{
			 ar[i][j]=x%10;
			 x=x/10;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
			   for(int k=0;k<n;k++)
		       { 
			    for(int l=0;l<n;l++)
			    {
			     if(abs(ar[i][j]-ar[k][l])==2)
			     {
			     	x=abs(i-k)+abs(j-l);
			     	if(m>x)
			     	{
			     		m=x;
			     	}
			     }
			    }
		       }	
			}
		}
		cout<<m<<endl;
	}
	return 0;
}
