#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdio>
 
using namespace std;
 
int n;
int corners[20000];
int sums[20000];

int main() 
{
    while(cin>>n)
    {
        int num=pow(2, n);
        int b,max=0,sum=0;
        for(int i=0;i<num;i++)
        {
           cin>>corners[i];
        }
        for(int i=0;i<num;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {   
            	b=i^(1<<j);  //if they are corners, only one coordinate will change
                             //so xor of them gives a binary number with a single 1 (xor gives 0 if bits are same and 1 if two bits are different)
                sum=sum+corners[b];
            }
            sums[i]=sum;
        }
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<n;j++)
            {   
            	b=i^(1<<j); 
                if(max<sums[i]+sums[b])
                {
                 max=sums[i]+sums[b];
                }
            }
            
        }
        cout<<max<<endl;
    }
}
