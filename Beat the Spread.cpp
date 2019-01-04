#include <iostream>
using namespace std;

int main() 
{
		int t,i=0;
		scanf("%d",&t);
		while(i<t)
		{
			long long int x,y,a,b;
			cin>>x;
                        cin>>y;
		    if(x<y)
		    {
		    	printf("impossible");
		    	printf("\n");
		    }
		    else
		    {
		     a=(x+y)/2;
		     b=x-a;
                     if(a-b==y)
                     {
		      printf("%d",a);
		      printf(" ");
		      printf("%d",b);
		      printf("\n");
		     }
                     else
                     {
                      printf("impossible");
		      printf("\n");      
                     }
		i++;   
		}
	return 0;
}
