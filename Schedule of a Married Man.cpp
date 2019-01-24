#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	while(i<=t)
	{
		int x,y,k,l,z=0,t=0;
		string a,b,c,d;
		cin>>a>>b>>c>>d;
	    y=c[3]-'0';	
	    x=c[4]-'0';
		y=y*10;
		y=y+x;
		x=stoi(c);
		
		l=d[3]-'0';	
	    k=d[4]-'0';
		l=l*10;
		l=l+k;
		k=stoi(d);
		
		int p,q,u,v;
		q=a[3]-'0';	
	    p=a[4]-'0';
		q=q*10;
		q=q+p;
		p=stoi(a);
		
		v=b[3]-'0';	
	    u=b[4]-'0';
		v=v*10;
		v=v+u;
		u=stoi(b);
		
		while(1)
		{
			if(p==u && q==v)
			{
				break;
			}
			q++;
			if(q==60)
			{
				p++;
				if(p==24)
				{
				  p=0;	
				}
				q=0;
			}
			if((p==x && q==y) || (p==k && q==l))
			{
				z++;
			}
		}
		swap(p,x);
		swap(q,y);
		swap(u,k);
		swap(v,l);
		
		while(1)
		{
			if(p==u && q==v)
			{
				break;
			}
			q++;
			if(q==60)
			{
				p++;
				if(p==24)
				{
				  p=0;	
				}
				q=0;
			}
			if((p==x && q==y) || (p==k && q==l))
			{
				z++;
			}
		}
		
		cout<<"Case "<<i<<": ";
		if(z==0)
		{
			cout<<"Hits Meeting\n";
		}
		else
		{
			cout<<"Mrs Meeting\n";
		}
		i++;
	}
	return 0;
}
