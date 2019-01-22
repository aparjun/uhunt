#include <iostream>
#include <string>
using namespace std;

int change(string str)
{
	if(str=="January")
    {
    	return 1;
    }
    if(str=="February")
    {
    	return 2;
    }
    if(str=="March")
    {
    	return 3;
    }
    if(str=="April")
    {
    	return 4;
    }
    if(str=="May")
    {
    	return 5;
    }
    if(str=="June")
    {
    	return 6;
    }
    if(str=="July")
    {
    	return 7;
    }
    if(str=="August")
    {
    	return 8;
    }
    if(str=="September")
    {
    	return 9;
    }
    if(str=="October")
    {
    	return 10;
    }
    if(str=="November")
    {
    	return 11;
    }
    if(str=="December")
    {
    	return 12;
    }
}
int main() 
{
  int t,i=1;
  cin>>t;
  while(i<=t)
  {
  	int mo,da,ye,x,y,z,count=0;
  	string abc;
    cin>>abc;
    mo=change(abc);
    cin>>abc;
    da=stoi(abc);
    cin>>abc;
    ye=stoi(abc);
    
    cin>>abc;
    y=change(abc);
    cin>>abc;
    x=stoi(abc);
    cin>>abc;
    z=stoi(abc);
    while(1)
    {
    	
            if(mo==1 || mo==3 || mo==5 || mo==7 || mo==8 || mo==10 || mo==12)
  			{
  			 if(da>31)
  			 {
  			 	da=1;
  			 	mo++;
  			 	if(mo>12)
  			 	{
  			 		mo=1;
  			 		ye++;
  			 	}
  			 }
  			}
  			else
  			{
  				if(mo==2)
  				{
  				 if(ye%4==0 && (ye%400==0 || ye%100!=0))
  				 {
  				 	if(da==29)
  				 	{
  				 		count++;
  				 	}
  				 	if(da>29)
  				 	{
  				 		da=1;
  				 		mo++;
  				 	}
  				 }
  				 else
  				 {
  				   if(da>28)
  				   {
  				   	da=1;
  				   	mo++;
  				   }
  				 }
  				}
  				else
  				{
  					if(da>30)
  					{
  						da=1;
  						mo++;
  					}
  				}
  			}
  			
  		if(da==x && mo==y && ye==z)
    	{
    		break;
    	}
    	da++;
    }
    cout<<"Case "<<i<<": ";
    cout<<count<<"\n";
  i++;	
  }
	return 0;
}
