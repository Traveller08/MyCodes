#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;cin>>n;
    string s;
    cin>>s;
    ll count=0;

    for(ll i=0;i<s.length()-1;i++)
    {   ll index=0;
        for(ll j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j]){
              index=j;
              break;
            }
        }
        ll arr[26]={},brr[26]={};
        for(ll j=i+1;j<index;j++)
        {
            arr[s[j]-'a']++;
        }
        for(ll j=index+1;j<s.length();j++)
        {
            brr[s[j]-'a']++;
        }
        for(ll j=0;j<26;j++)
        {
            count+=(min(arr[j],brr[j]));
        }
    }
       
    cout<<count<<endl;  

    return 0;
}