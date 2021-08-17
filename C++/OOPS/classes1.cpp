#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    stack<pair<ll,ll> > st1,st2;
    ll n1=0;
    ll t;cin>>t;
      while(t--)
    {
        n1++;
        ll b;cin>>b;
        if(b==1)
        {   ll x;
            cin >> x ;
            st1.push(make_pair(x,n1));
            if(st2.size()>0)
            {
                if(st2.top()<st1.top())
                {
                    st2.push(make_pair(x,n1));              
                }
            }
            else
            {
                st2.push(make_pair(x,n1));    
            }
        }
        else if(b==2)
        {
            if(st1.top().first==st2.top().first && st1.top().second==st2.top().second)
                st2.pop() ;
            st1.pop() ;    
        }
        else if(b==3)
        {
             cout << st2.top().first<<endl;
        } 
    }
   
    return 0;
}