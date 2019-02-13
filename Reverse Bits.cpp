#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,r;
  while(cin>>n)
  {
   r=n;
   char* b =(char*) &r; //char pointer divides 32 bits into 4 chars of 8 bits each
   
   b[0]=b[0]^b[3]; //swapping first(0) and fourth(3) char
   b[3]=b[0]^b[3]; //doing xor thrice swaps two numbers
   b[0]=b[0]^b[3];
   
   b[1]=b[1]^b[2]; //swapping second(1) and third(2) char
   b[2]=b[1]^b[2];
   b[1]=b[1]^b[2];
   
   cout<<n<<" converts to "<<r<<endl;
  }

 return 0;
}

