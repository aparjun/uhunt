#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int f,r;
	while(cin>>f && f!=0)
	{
		cin>>r;
		int n=0,a[f];
		float x,m=0,b[f*r];
		
		for(int i=0;i<f;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<r;i++)
		{
			cin>>x;
			for(int j=0;j<f;j++)
		    {
			  b[n]=x/a[j];
			  n++;
		    }
		}
		sort(b,b+(f*r));
		for(int i=1;i<f*r;i++)
		{
		    if(m<b[i]/b[i-1])
			{
				m=b[i]/b[i-1];
			}
		}
		printf("%.2f",m);
		printf("\n");
	}
	return 0;
}
