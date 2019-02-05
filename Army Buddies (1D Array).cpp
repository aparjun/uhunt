#include <iostream>
using namespace std;
 
int main() 
{
    while(1)
    {
    	int s,b,l,r;
        int left[100000];
        int right[100000];
        cin>>s>>b;
        if(s==0 && b==0)
        {
         break;
        }
        for(int i=0;i<s+1;i++)
        {
            left[i]=i-1;
            right[i]=i+1;
        }
        for(int i=0;i<b;i++)
        {
            cin>>l>>r;
            if(left[l]<1)
            {
             cout<<"* ";
            }
            else
            {
             cout<<left[l]<<" ";
            }
            if(right[r]>s)
            {
            	cout<<"*\n";
            }	
            else
            {
             cout<<right[r]<<"\n";
            }
 
            left[right[r]] = left[l];
            right[left[l]] = right[r];
        }
        cout<<"-\n";
    }
}
