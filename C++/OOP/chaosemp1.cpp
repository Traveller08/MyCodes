#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

int t,q,d;
  cin >> t >> q >>d;
  while (t--)
  {
      ll l=(-1)*2e18,r=2e18;
      
      string inp;
      ll count=0;
      stack<pair<ll,ll>>pre;
      pre.push(make_pair(l,r));
      pre.push(make_pair(l/2,r/2));
      bool out=0;
    while(l<=r)
    {   count++;
        cout<<2<<l<<" "<<l<<" "<<r<<" "<<r<<endl;
        cin>>inp;
      
        if(inp=="IN" && out==false)
        {   
            l=l/2;
            r=r/2;
           pre.push(make_pair(l,r));
        }
        if(inp=="OUT")
        {  out=true;
          pair<ll,ll>uper=pre.top();
          pre.pop();
          pair<ll,ll>uper_one=pre.top();
          l = (uper_one.first+uper.first)/2;
          r = (uper_one.second+uper.second)/2;
          pre.push(uper);
          pre.push(make_pair(l,r));
        }
        if(inp=="IN" && out==true)
        {
            pair<ll,ll>uper=pre.top();
          pre.pop();
          pair<ll,ll>uper_one=pre.top();
          l = (uper_one.first+uper.first)/2;
          r = (uper_one.second+uper.second)/2;
          pre.push(uper);
          pre.push(make_pair(l,r));
        }
          if(inp=="O")break;
          if(inp=="FAILED")break;
        if(count==q)break;
    }
  }
}