#include <iostream>
using namespace std;

int main() 
{
	int h,l;
	while(cin>>h)
	{
		if(h==0)
		{
			break;
		}
		cin>>l;
		int a[l],b[l];
		int count=0,m=100000;
		for(int j=0;j<l;j++)
		{
			cin>>a[j];
			if(a[j]<m)
			{
				m=a[j];
			}
			b[j]=h;
		}
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<l;k++)
			{
				if(b[k]!=a[k])
				{
					b[k]--;
				}
			}
			for(int k=0;k<l;k++)
			{
				if(b[k]==a[k])
				{
				    if(k==l-1)
					{
						count++;
					}
					else
					{
						if(b[k+1]!=a[k+1])
						{
							count+=2;
						}
					}
				}	
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
