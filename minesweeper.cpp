#include <iostream>
using namespace std;

int main() 
{
	while(1)
	{
	 int r,c;
	 cin>>r;
	 cin>>c;
	 char a1[r][c],b[r][c];
	 int a2[100][100]={0};
	 if(r==0 || c==0)
	 {
	 	break;
	 }
	 for(int j=0;j<r;j++)
	 {
	 	for(int k=0;k<c;k++)
	 	{
	 		cin>>a1[j][k];
	 		if(a1[j][k]=='*')
	 		{
	 			b[j][k]='*';
	 			if(j-1>=0)
	 			{
	 			 a2[j-1][k]++;	
	 			 b[j-1][k]=a2[j-1][k];
	 			}
	 			if(k-1>=0)
	 			{
	 			 a2[j][k-1]++;	
	 			 b[j][k-1]=a2[j][k-1];
	 			}
	 			if(j-1>=0 && k-1>=0)
	 			{
	 			 a2[j-1][k-1]++;
	 			 b[j-1][k-1]=a2[j-1][k-1];
	 			}
	 			if(j+1<r)
	 			{
	 			 a2[j+1][k]++;	
	 			 b[j+1][k]=a2[j+1][k];
	 			}
	 			if(k+1<c)
	 			{
	 			 a2[j][k+1]++;
	 			 b[j][k+1]=a2[j][k+1];
	 			}
	 			if(j+1<r && k+1<c)
	 			{
	 			 a2[j+1][k+1]++;
	 			 b[j+1][k+1]=a2[j+1][k+1];
	 			}
	 			if(j+1<r && k-1>=0)
	 			{
	 			 a2[j+1][k-1]++;	
	 			 b[j+1][k-1]=a2[j+1][k-1];
	 			}
	 			if(k+1<c && j-1>=0)
	 			{
	 			 a2[j-1][k+1]++;
	 			 b[j-1][k+1]=a2[j-1][k+1];
	 			}
	 		}
	 	}
	 }
	 for(int j=0;j<r;j++)
	 {
	 	for(int k=0;k<c;k++)
	 	{
	 		cout<<b[j][k]<<" ";
	 	}
	 	cout<<"\n";
	 }
	 cout<<"\n";
	}
	return 0;
}
