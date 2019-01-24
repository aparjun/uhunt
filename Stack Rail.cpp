#include <iostream>
#include <stack>
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
		int a[n],f=0;
		while(f==0)
		{
		 for(int j=0;j<n;j++)
		 {
		 	cin>>a[j];
		 	if(a[j]==0)
		 	{
		 		cout<<"\n";
		 		f++;
		 		break;
		 	}
		 }
		 if(f==0)
		 {
		 	stack <int> s;
		    int i=1;
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
	    } 
	}
	return 0;
}
