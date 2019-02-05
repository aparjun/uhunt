#include <iostream>
using namespace std;
 
int main() 
{
	int n,a,b;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
         break;
        }
        int i=0,j=0;
        a=0,b=0;
        while(n>0)
        {
            if(1&n) 
            {
                if(j%2) 
                {
                    b=b|1<<i;
                } 
                else 
                {
                    a=a|1<<i; 
                }
                j++;
            }
            i++;
            n=n>>1;
        }
        cout<<a<<" "<<b<<"\n";
    }
}
