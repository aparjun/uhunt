#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{ 
	 map<char,int>m;
	 map <char,int>::iterator it;
	 double n;
	 string str;
	 char c;
	 int k,p;
	 cin>>k;
	 for(int j=0;j<k;j++)
	 {
	 	cin>>c;
	 	cin>>p;
	 	m[c]=p;
	 }
	 cin>>k;
	 getline(cin,str);
	 for(int i=0;i<k;i++)
	 {
	 	getline(cin,str);
	 	for(int j=0;j<str.size();j++)
	 	{
	 		it=m.find(str[j]);
	 		if(it!=m.end())
	 		{
	 			n+=it->second;
	 		}
	 	}
	 }
	 n=n/100;
	 printf("%.2f",n);
	 cout<<"$"<<endl;
		i++;
	}
	return 0;
}
