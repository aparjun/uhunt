#include <iostream>

using namespace std;

int main() 
{
  int t,i=1;
  cin>>t;
  while(i<=t)
  {
  	int f=0;
  	float a=0,b=0,c=0;
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
  	cout<<"Case #"<<i<<": ";
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
  		   c=y1-y2;
  		   b=m1-m2;
  		   b=b/12;
  		   a=d1-d2;
  		   a=a/365;
  		   c=c+a+b;
  		   c=(int)c;
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
