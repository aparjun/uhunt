#include <iostream>
using namespace std;

int main() 
{
	int t;
	while(cin>>t)
	{
		int ar[10]={0},br[10]={0};
		int a,b,c;
		string str,s[10];
		for(int j=0;j<t;j++)
		{
			cin>>s[j];
		}
		for(int j=0;j<t;j++)
		{
			cin>>str;
			cin>>a;
			cin>>b;
			ar[j]=a*b;
			
			for(int k=0;k<b;k++)
			{
				cin>>str;
				for(int p=0;p<t;p++)
				{
					if(s[p]==str)
					{
						br[p]=br[p]+a;
					}
				}
			}
			
		}
		c=br[0];
		cout<<c<<"\n";
	}
	return 0;
}
