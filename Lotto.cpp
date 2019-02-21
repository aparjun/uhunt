#include <iostream>
using namespace std;

int main() 
{
	int n,c=0;
	while(cin>>n && n!=0)
	{
		c++;
		if(c>1)
		{
         cout<<endl;
		}
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i = 0 ; i < n ; i++)  
        {  
         for(int j = i+1 ; j < n ; j++)  
         {  
          for(int k = j+1 ; k < n ; k++)  
          {  
           for(int l = k+1 ; l < n ; l++)  
           {  
             for(int m = l+1 ; m < n ; m++)  
             {  
               for(int o = m+1 ; o < n ;o++)  
               {  
                 printf("%d %d %d %d %d %d\n", ar[i], ar[j], ar[k], ar[l], ar[m], ar[o]);  
               }  
             }  
           }  
          }  
         }  
        }  
	}
	return 0;
}
