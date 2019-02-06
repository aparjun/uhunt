#include <iostream>
#include <map>
using namespace std;

int main()
{
	string str;
	int t;
	cin>>t;
	getline(cin,str);
	getline(cin,str);
	while(t--)
	{
		float p;
		int n=0;
		map<string, int>m;
		while(getline(cin,str))
		{
		 if(str=="")
		 {
			break;
		 }
		 m[str]++;
		 n++;
		}
		map<string, int>::iterator i;
		for(i=m.begin();i!=m.end();i++)
		{
			p=i->second;
			p=p*100/n;
			cout<<i->first<<" ";
			printf("%.4f",p);
			cout<<"\n";
		}
		if(t>0)
		{
		 cout<<endl;
		} 
	}
	return 0;
}
