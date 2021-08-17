#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
void fun(vector<ll>a,vector<ll>b){
    for(ll i=0;i<a.size();i++)a[i]++;
     for(ll i=0;i<a.size();i++)cout<<a[i]<<" ";
     cout<<endl;
      for(ll i=0;i<a.size();i++)cout<<b[i]<<" ";
}
int main(){
 fast();
 vector<ll>a={1,2,3,4};
 fun(a,a);
 

 return 0;
}