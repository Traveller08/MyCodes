#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

string sortS(string &str,ll start)
{
  ll   len = str.length();
    for(ll i=start+1; i<len; i++)
    {
        for(ll j=start+1; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
              char  ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    return str;
}

string solve( string s)
{  ll indexs=0;
 string ans;
bool found=0;
ll n=s.length();
    for(ll i=1;i<s.length()-1;i++)
    {
        if((s[i]-'0')<(s[i+1]-'0'))
        {
          indexs=i;
          found=true;
          break;
        }
    }
  if(found) {
    sortS(s,indexs);
    char low=s[indexs+1];ave
     char org=s[indexs];
     if(org<low)
     {
         swap(s[indexs],s[indexs+1]);
     }
     else
     {
         for(ll i=indexs+1;i<s.length();i++)
         {
             if(s[i]>org)
             {
                 swap(s[indexs],s[i]);
                 break;
             }
         }
     }
     
     }
     else s="-1";

  return s;
}

int main(){
 fast();
 string s;
 cin>>s;
 cout<<solve(s)<<endl;
 return 0;
}