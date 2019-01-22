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
		int a[l];
		int count=0,d=0;
		for(int j=0;j<l;j++)
		{
			cin>>a[j];
		}
		for(int j=1;j<l;j++)
		{
		    d=a[j]-a[j-1];
            if(d>0) 
            {
                count+=d;
            }    
		}
		count+=h-a[l-1];
		cout<<count<<"\n";
	}
	return 0;
}
