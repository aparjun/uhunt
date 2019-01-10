#include <iostream>
using namespace std;

int main() 
{
  int t,i=1;
  cin>>t;
  while(i<=t)
  {
  	 int da,mo,ye,d=280;
  	 string str;
  	 cin>>str;
  	 mo=(str[0]-'0')*10+(str[1]-'0');
  	 da=(str[2]-'0')*10+(str[3]-'0');
  	 ye=(str[4]-'0')*1000+(str[5]-'0')*100+(str[6]-'0')*10+(str[7]-'0');
   	 while(d>0)
  	 {
  			da++;
  			d--;
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
    }
    cout<<i<<" "<<mo<<"/"<<da<<"/"<<ye<<" ";
    if((mo==1 && da>=21) || (mo==2 && da<=19))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==2 && da>=20) || (mo==3 && da<=20))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==3 && da>=21) || (mo==4 && da<=20))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==4 && da>=21) || (mo==5 && da<=21))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==5 && da>=22) || (mo==6 && da<=21))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==6 && da>=22) || (mo==7 && da<=22))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==7 && da>=23) || (mo==8 && da<=21))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==8 && da>=22) || (mo==9 && da<=23))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==9 && da>=24) || (mo==10 && da<=23))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==10 && da>=24) || (mo==11 && da<=22))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==11 && da>=23) || (mo==12 && da<=22))
    {
    	cout<<"Aquarius\n";
    }
    if((mo==12 && da>=23) || (mo==1 && da<=20))
    {
    	cout<<"Aquarius\n";
    }
    i++;
  } 
	return 0;
}

