#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		stack <int> s;
		if(n==0)
		{
			break;
		}
		int a[n],i=0;
		while(i<n)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				cout<<"\n";
				break;
			}
			i++;
		}
		i=1;
	    for(int j=0;j<n;j++)
	    {
		 while(i<=n && (s.empty() || s.top()!=a[j]))
		 {
			 s.push(i);	
			 i++;
		 }
		 if(s.top()==a[j])
		 {
			 s.pop();
		 } 
		 else
		 {
		 	break;
		 }
	    } 
	     if(s.empty())
	     {
	     	cout<<"Yes\n";
	     }
	     else
	     {
	     	cout<<"No\n";
	     }
	}
	return 0;
}

