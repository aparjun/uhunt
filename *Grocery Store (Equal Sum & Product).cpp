#include <iostream>
using namespace std;

int main() 
{
	float a,b,c,p1,p2,p3,p4;
	for(p1=1;p1<2000;p1++)
	{
		if(pow(p1,4)>2*pow(10,9))
		{
			break;
		}
		for(p2=p1;p2<2000-p1;p2++)
		{
			if(p1*pow(p2,3)>2*pow(10,9))
		    {
			    break;
		    }
		    for(p3=p2;p2<2000-p1-p2;p3++)
		    {
			 if(p1*p2*pow(p3,2)>2*pow(10,9))
		     {
			    break;
		     }
		     b=p1*p2*p3
             c=1000000;
             if(b==c)
             {
               continue;
             }
             a=p1+p2+p3;
             d=c*a;
             e=b-c;
             p4=d/e;
             if(d%e!=0 || p3>p4 || a+p4>2000 || b*p4>2*pow(10,9))
             {
               continue;
             }
             cout<<p1/100<<" "<<p2/100<<" "<<p3/100<<" "<<p4/100<<"\n";
             
		    }
		}
	}
	return 0;
}
