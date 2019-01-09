#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
	   int r,c,n=0;
	   cin>>r;
	   cin>>c;
	   if(r==0)
	   {
	   	break;
	   }
	   int ar[500][500]={0};
	   for(int j=0;j<r;j++)
	   {
	   	for(int k=0;k<c;k++)
	   	{
	   		if(ar[j][k]=='0')
	 		{
	 			if(j+1<r && k-2>=0)
	 			{
	 			 if(a2[j+1][k-2]=='0')
	 			 {
	 			  a2[j+1][k-2]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }
	 			}
	 			if(k-1>=0 && j-2>=0)
	 			{
	 			 if(a2[j-2][k-1]=='0')
	 			 {
	 			  a2[j-2][k-1]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }	
	 			}
	 			if(j-2>=0 && k+1<c)
	 			{
	 			 if(a2[j-2][k+1]=='0')
	 			 {
	 			  a2[j-2][k+1]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }
	 			}
	 			if(j-1>=0 && k+2<c)
	 			{
	 			 if(a2[j-1][k+2]=='0')
	 			 {
	 			  a2[j-1][k+2]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }	
	 			}
	 			if(k+1<c && j+2<r)
	 			{
	 			 if(a2[j+2][k+1]=='0')
	 			 {
	 			  a2[j+2][k+1]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }
	 			}
	 			if(j-2>=0 && k+1<c)
	 			{
	 			 if(a2[j-2][k+1]=='0')
	 			 {
	 			  a2[j-2][k+1]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }
	 			}
	 			if(j-2>=0 && k-1>=0)
	 			{
	 			 if(a2[j-2][k-1]=='0')
	 			 {
	 			  a2[j-2][k-1]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }	
	 			}
	 			if(k-2>=0 && j-1>=0)
	 			{
	 			 if(a2[j-1][k-2]=='0')
	 			 {
	 			  a2[j-1][k-2]++;
	 			 }
	 			 else
	 			 {
	 			 	break;
	 			 }
	 			}
	   	    }
	   }
	}   
	return 0;
}
