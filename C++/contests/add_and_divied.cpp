#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        cin>>s;
         bool found=0;
           if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0'){found=true;}
           else  if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[n-1]=='0'){found=true;}
           else if(s[0]=='2' and s[1]=='0' and s[n-2]=='2' and s[n-1]=='0'){found=true;}
           else if(s[0]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0'){found=true;}
        else if(s[n-4]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0'){found=true;}
        
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}