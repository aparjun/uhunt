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
            if(1&n) //to check if last bit of n is 1 
            {
                if(j%2) //for alternatingly adding 1s to a and b
                {
                    b=b|(1<<i); //shift 1 to left i times and add to b ("or" acts as addition)
                } 
                else 
                {
                    a=a|(1<<i); 
                }
                j++;
            }
            i++;
            n=n>>1; //remove last bit to get the next (second last) bit
        }
        cout<<a<<" "<<b<<"\n";
    }
}
