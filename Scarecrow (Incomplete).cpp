#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t,k=1;
	cin>>t;
	while(k<=t)
	{
		int n;
		float c=0;
		string str;
		cin>>n>>str;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='.')
			{
				c++;
			}
		}
		c=c/3;
		n=ceil(c);
		cout<<"Case "<<k<<": ";
		cout<<n<<endl;
		k++;
	}
	return 0;
}
