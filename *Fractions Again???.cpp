#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k;
	while(cin>>k)
	{
		int a,c=0;
		for(int i=k+1;i<=2*k;i++)  // 1/k=1/a+1/i
		{                          // Therefore, a=(i*k)/(i-k)
	        if((i*k)%(i-k)==0)      
		    {
		 	  c++;
		    }             
		 
		}
		cout<<c<<endl;
		for(int i=k+1;i<=2*k;i++)   //Note: One of the 2 fractions' denominators ranges only 
		{                           //from k+1 to 2*k
	        if((i*k)%(i-k)==0)      // Ex- If k=2, the denominators will be 3,4 for one fraction
		    {
		 	  a=(i*k)/(i-k);
		 	  printf("1/%d = 1/%d + 1/%d\n", k, a, i);
		    }             
		}
	}
	return 0;
}
