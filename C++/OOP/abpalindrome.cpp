/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) ll arr[n];rep(i,0,n)cin>>arr[i];
#define new_int_1(t) ll t;cin>>t;
#define new_int_2(a,b) ll a,b;cin>>a>>b
#define new_int_3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
int main(){
 fast();
 new_str(s);
 string ans;
 ll n=s.length();
 stack<pair<char,ll>>validpair;
 validpair.push(make_pair(s[0],1));
 rep(i,1,n)
 {
    pair<char,ll>temp=validpair.top();
    if(temp.first==s[i])
    {
        validpair.pop();
        temp.second++;
        if(temp.second>=3)
        {
            temp.second=2;
        }
        validpair.push(make_pair(s[i],temp.second));
    }
    else validpair.push(make_pair(s[i],1));
 }
 pair<char,ll>last=validpair.top();
 if(last.second>=3)
 {
     last.second=2;
     validpair.pop();
     validpair.push(make_pair(last.first,last.second));
 }
 ll sizofst=validpair.size();
 //aacout<<validpair.top().first<<" "<<" "<<validpair.top().second<<endl;
 while(sizofst>0)
 { // cout<<1<<endl;
     sizofst--;
     pair<char,ll>up1=validpair.top();
     if(up1.second==1)
     {// cout<<2<<endl;
         ans.push_back(up1.first);
         validpair.pop();
     }
       else if(up1.second==2 && validpair.size()>=3)
     { // cout<<3<<endl;
         validpair.pop();
         pair<char,ll>up2=validpair.top();
          if(up2.second==2){
             validpair.pop();
         pair<char,ll>up3=validpair.top();
          if(up3.second==2)
            {
               ans.push_back(up1.first);
                ans.push_back(up1.first);
                 ans.push_back(up2.first);
                 sizofst--;
            }
            else if(up3.second==1)
            {
                ans.push_back(up1.first);
                  ans.push_back(up2.first);
                    ans.push_back(up2.first);
                  sizofst--;
            }
          }
               else if(up2.second==1)
         {
             ans.push_back(up1.first);
             ans.push_back(up1.first);
         }
     }
     else if(up1.second==2 && validpair.size()>1)
     { // cout<<3<<endl;
         validpair.pop();
         pair<char,ll>up2=validpair.top();
         if(up2.second==2)
         {
             ans.push_back(up1.first);
         }
         else if(up2.second==1)
         {
             ans.push_back(up1.first);
             ans.push_back(up1.first);
         }
     }
     else if(validpair.size()==1)
     {
         if(validpair.top().second==1)
         {
             ans.push_back(validpair.top().first);
         }
         else  if(validpair.top().second==2)
         {
             ans.push_back(validpair.top().first);
              ans.push_back(validpair.top().first);
         }
     }
 }
 reverse(ans.begin(),ans.end());
 cout<<ans<<endl;
 return 0;
}