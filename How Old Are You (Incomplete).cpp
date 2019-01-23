#include <iostream>

using namespace std;

int main() 
{
  int t,i=1;
  cin>>t;
  while(i<=t)
  {
  	int f=0,c=0;
  	string str,abc;
  	cin>>str;
  	cin>>abc;
  	int d1,m1,y1,d2,m2,y2;
  	d1=stoi(str.substr(0,2));
  	d2=stoi(abc.substr(0,2));
  	m1=stoi(str.substr(3,5));
  	m2=stoi(abc.substr(3,5));
  	y1=stoi(str.substr(6,10));
  	y2=stoi(abc.substr(6,10));
  	if(y2>=y1)
  	{
  		if(y2>y1)
  		{
  			cout<<"Invalid birth date\n";
  			f++;
  		}
  		else
  		{
  			if(m2>=m1)
  			{
  				if(m2>m1)
  				{
  					cout<<"Invalid birth date\n";
  					f++;
  				}
  				else
  				{
  					if(d2>=d1)
  					{
  						if(d2>d1)
  						{
  							cout<<"Invalid birth date\n";
  							f++;
  						}
  						else
  						{
  							cout<<"0\n";
  							f++;
  						}
  					}
  				}
  			}
  		}
  	}
  	if(f==0)
  	{
  		   while(1)
  	       {
  			d2++;
  			if(d1==d2 && m1==m2 && y1==y2)
  			{
  				break;
  			}
  			if(m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12)
  			{
  			 if(d2>31)
  			 {
  			 	d2=1;
  			 	m2++;
  			 	if(m2>12)
  			 	{
  			 		m2=1;
  			 		y2++;
  			 		c++;
  			 	}
  			 }
  			}
  			else
  			{
  				if(m2==2)
  				{
  				 if(y2%4==0 && (y2%400==0 || y2%100!=0))
  				 {
  				 	if(d2>29)
  				 	{
  				 		d2=1;
  				 		m2++;
  				 	}
  				 }
  				 else
  				 {
  				   if(d2>28)
  				   {
  				   	d2=1;
  				   	m2++;
  				   }
  				 }
  				}
  				else
  				{
  					if(d2>30)
  					{
  						d2=1;
  						m2++;
  					}
  				}
  			}
           }
           if(c>130)
           {
           	cout<<"Check birth date\n";
           }
           else
           {
           	cout<<c<<endl;
           }
  	}
  	i++;
  }
	return 0;
}
