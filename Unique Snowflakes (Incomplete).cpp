#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c=0,max=0;
		cin>>n;
		map<int, int> num;
		map<int, int>:: iterator i;
		for(int j=0;j<n;j++)
		{
			cin>>m;
			if(num[m]==0)
			{
				num[m]++;
				c++;
				if(max<c)
				{
					max=c;
				}
			}
			else
			{
				num.clear();
				c=0;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
