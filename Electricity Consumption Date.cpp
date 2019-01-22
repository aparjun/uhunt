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
		int d[n],m[n],ye[n],c[n];
		int x,y,z,s=0,count=0;
		for(int j=0;j<n;j++)
		{
			cin>>d[j];
			cin>>m[j];
			cin>>ye[j];
			cin>>c[j];
		}
		for(int j=0;j<n-1;j++)
		{
			x=d[j];
			y=m[j];
			z=ye[j];
			x++;
			if(y==1 || y==3 || y==5 || y==7 || y==8 || y==10 || y==12)
  			{
  			 if(x>31)
  			 {
  			 	x=1;
  			 	y++;
  			 	if(y>12)
  			 	{
  			 		y=1;
  			 		z++;
  			 	}
  			 }
  			}
  			else
  			{
  				if(y==2)
  				{
  				 if(z%4==0 && (z%400==0 || z%100!=0))
  				 {
  				 	if(x>29)
  				 	{
  				 		x=1;
  				 		y++;
  				 	}
  				 }
  				 else
  				 {
  				   if(x>28)
  				   {
  				   	x=1;
  				   	y++;
  				   }
  				 }
  				}
  				else
  				{
  					if(x>30)
  					{
  						x=1;
  						y++;
  					}
  				}
  			}
  			if(x==d[j+1] && y==m[j+1] && z==ye[j+1])
  			{
  				count++;
  				s=s+c[j+1]-c[j];
  			}
		}
		cout<<count<<" "<<s<<"\n";
	}
	return 0;
}
