#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		int b,c;
		b=n%4;
		c=n/4;
		if(b!=0)
		{
			c=c+1;
		}
		int d=2*c;
		int e=d+1;
		int a[60][2]={0};
		cout<<"Printing order for "<<n<<" pages:\n";
		for(int m=2*c-1;m>=0;m--)
		{
		 if(m%2==0)
		 {
		  a[m][1]=d;
		  if(e<=n)
		  {
		   a[m][0]=e;
		  } 
		  d--;
		  e++;
		 }
		 else
		 {
		  a[m][0]=d;
		  if(e<=n)
		  {
		   a[m][1]=e;
		  } 
		  d--;
		  e++;
		 }
		}
		int i=0;
		for(int m=0;m<2*c;m++)
		{
			if(n>0)
			{
				if(m%2==0)
				{
					i++;
					cout<<"Sheet "<<i<<", front: ";
				}
				else
				{
				    cout<<"Sheet "<<i<<", back: ";	
				}
				if(a[m][0]==0)
				{
					cout<<"Blank, ";
				}
				else
				{
					cout<<a[m][0]<<", ";
					n--;
				}
				if(a[m][1]==0)
				{
					cout<<"Blank";
				}
				else
				{
					cout<<a[m][1];
					n--;
				}
				cout<<"\n";
			}
		}

	}

	return 0;
}
