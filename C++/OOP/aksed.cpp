#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;cin>>n;
    vector<pair<ll,ll>>arr;
    for(ll i=0;i<n;i++)
    {
        ll a,b;cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=(arr[i].second-arr[i].first);
    }
    cout<<ans<<endl;

    return 0;
}