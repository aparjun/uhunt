#include <iostream>
using namespace std;

int main() 
{
		while(1)
		{
			int day=1;
			float h,u,d,f,s=0;
		    scanf("%f",&h);
		    if(h==0)
		    {
		     break;
		    }
		    else
		    { 
		      scanf("%f",&u);
		      scanf("%f",&d);
		      scanf("%f",&f);
		      f=f/100;
		      f=f*u;
		      while(1)
		      {
		      	s=s+u;
		      	if(u>0)
		      	{
		      		u=u-f;
		      	}
		      	if(s>h)
		      	{
		      		break;
		      	}
		      	s=s-d;
		      	if(s<0)
		      	{
		      		break;
		      	}
		      	day++;
		      }
		    } 
		    if(s<0)
		    {
		    	printf("failure on day ");
		    	printf("%d",day);
		    	printf("\n");
		    }
		    else
		    {
		        printf("success on day ");
		    	printf("%d",day);
		    	printf("\n");	
		    }
		}
	return 0;
}
