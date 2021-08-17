#include<bits/stdc++.h>
using namespace std;
#define l int
bool dv(string a,l b)
{ // cout<<a<<endl;
    stringstream f(a);
    l c=0;f>>c;
 
    if(c%b==0)return true;
    else return false;
}
bool cn(string &a,l b)
{ 
    for(char i='0';i<='9';i++)
    { string s=a;
        s.push_back(i);
        if(dv(s,b))
        {   a.push_back(i);
            return true;
        }
    }return false;
}
l main()
{
  l t;cin>>t;
  while(t--){
      string a;l b,n;cin>>a>>b>>n;

  bool flag=0;
    while(n--)
    {
      if(!cn(a,b))
      {
          flag=true;
          break;
      }
    }
    if(!flag)
    {
        stringstream d(a);
        l hj=0;
        d>>hj;
        cout<<hj<<endl;
    }
    else cout<<-1<<endl;
  }
}