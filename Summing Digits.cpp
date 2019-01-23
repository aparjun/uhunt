#include <iostream>
using namespace std;

long long int dsum(long long int n) 
{ 
    long long int sum = 0; 
    while(n>0 || sum>9) 
    { 
        if(n==0) 
        { 
            n=sum; 
            sum=0; 
        } 
        sum+=n%10; 
        n/=10; 
    } 
    return sum; 
}    
int main() 
{
   while(1)
   {
   	long long int num;
   	cin>>num;
   	if(num==0)
   	{
   		break;
   	}
   	cout<<dsum(num)<<"\n";
   }
	return 0;
}
