#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n,m;
    cin>>n>>m;
    string arr[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){

            string temp1=to_string(i);
            string temp2=to_string(j);
            arr[i][j]=temp1+temp2;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}