#include <iostream>
using namespace std;

int main() 
{
  while(1)
  {
  	 long int d;
  	 int da,mo,ye;
  	 cin>>d;
  	 cin>>da>>mo>>ye;
  	 if(d==0)
  	 {
  	 	break;
  	 }
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
    cout<<da<<" "<<mo<<" "<<ye<<"\n";
  } 
	return 0;
}
