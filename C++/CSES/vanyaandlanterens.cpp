#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
 fast();
 ll n,l;cin>>n>>l;
 ll arr[n];
 for(ll i=0;i<n;i++)cin>>arr[i];
 sort(arr,arr+n);
 ll dif[n+1]={};
 for(ll i=1;i<n;i++)
 {
    dif[i]=arr[i]-arr[i-1];
 }
 sort(dif,dif+n+1);
 double maxdif=dif[n];
 double difin=arr[0];
 double difend=l-arr[n-1];
 double r=double(maxdif)/2;
 double ans;
 if(r>=difend && r>=difin )ans=r;
 else if(difend>=r && difend>=difin)ans=difend;
 else if(difin>=r && difin>=difend)ans=difin;
 cout<<setprecision(10)<<ans<<endl;
 return 0;
}