#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		int ar[n][n];
		int m=10000000,max=0,x;
		string str;
		for(int i=0;i<n;i++)
		{
			cin>>str;
			for(int j=0;j<str.size();j++)
			{
			 ar[i][j]=str[j]-'0';
			}
		}

		for(int i=0;i<n;i++) //Note: Get the minimum distance for each 1 and the maximum of all 1s
		{
			for(int j=0;j<n;j++)
			{
				if(ar[i][j]==1)
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
		          
		          if(max<m)
		          {
		          	max=m;
		          }
		          m=10000000;
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
