#include<bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

int main(){
    fast();
    ll t;cin>>t;
    while (t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        int arr[n+1][m+1];
        ll ans=0,one_size=0;
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0|| j==0)
                    arr[i][j]=0;
                else
                    cin>>arr[i][j];
            }
        }
         for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(arr[i][j]>=k)one_size++;
            }
        }
        for(ll i=0;i<=n;i++){
             for(ll j=1;j<=m;j++){
                 arr[i][j]+=arr[i][j-1];
             }
        }
        for(ll i=0;i<=m;i++){
            for(ll j=1;j<=n;j++){
                arr[j][i]+=arr[j-1][i];
            }
        }
        ll maxsize=min(m,n);
        for(ll l=2;l<=maxsize;l++)
        {  ll a=n/4;
            a=max(l,a);
            for(ll i=n;i>=l;i--)
            { 
                for(ll j=m;j>=l;j--)
                {
                    ll temp=arr[i][j]-arr[i-l][j]-arr[i][j-1]+arr[i-l][j-l];
                      cout<<temp<<" "<<l*l<<" "<<k<<endl;
                    if(temp/(l*l)>=k){
                        
                        ans++;
                      }
                    else break;
                }
            }
           
            ll c=n/4;
            ll b=c+1;
            b=max(b,l);
            for(ll i=n;i>=b;i--){
              
                for(ll j=l;j<=m;j++){
                     ll temp=arr[i][j]-arr[i-l][j]-arr[i][j-1]+arr[i-l][j-l];
                   //  cout<<temp<<" "<<l*l<<" "<<k<<endl;
                    if(temp/(l*l)>=k){
                        ans+=(m-j+1);
                   //         cout<<1<<endl;
                        break;
                    }
                }
            }
        }
        ans+=one_size;
        cout<<ans<<"\n";
    }
    
    return 0;
}
