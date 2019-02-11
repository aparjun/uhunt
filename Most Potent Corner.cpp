#include<algorithm>
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
        int max=0,sum=0;
        for(int i=0;i<num;i++)
        {
           cin>>corners[i];
        }
        for(int i=0;i<num;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                int b=i^(1<<j);
                sum+=corners[b];
            }
            sums[i]=sum;
        }
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<n;j++) 
            {
                int b=i^(1<<j);
                if(max<sums[i]+sums[b])
                {
                	max=sums[i]+sums[b];
                }
            }
        }
        printf("%d\n", max);
    }
}
