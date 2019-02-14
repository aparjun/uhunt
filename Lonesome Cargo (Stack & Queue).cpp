#include <iostream>
#include <queue>
#include <stack>
using namespace std;

stack <int> stk;
queue <int> que[105];

int test,n,s,q;
int x,y,p,g,t,f;


int main()
{

    cin>>test;
    while(test--)
    {
        cin>>n>>s>>q; //n is number of stations, s is carrier capacity, q is queue capacity 
        for(int i=0;i<n;i++)
        {
            cin>>x; //number of cargo in ith queue
            while(x--)
            {
                cin>>y;
                que[i].push(y); //cargo added to queue
                g++;
            }
        }
  
        f=t=p=0;

        while(g>0)
        {
            if(f==1)
            {
                t=t+2;
            }
            
            f=1;
            while( (!stk.empty()&&que[p].size()<q) || (!stk.empty()&&stk.top()==p+1) ) // Unloading the stack
            {
                if(stk.top()==p+1)// The required box is same as station number (p+1)
                {
                    stk.pop();
                    g--;
                }
                else
                {
                    que[p].push(stk.top());
                    stk.pop();
                }
                t++;
            }

            while(stk.size()<s && !que[p].empty()) //Loading the stack
            {
                stk.push(que[p].front());
                que[p].pop();
                t++;
            }
            p++;
            p=p%n; //p=n means 1 round. For next round p=1


        }
        cout<<t<<endl;

    }

    return 0;

}
