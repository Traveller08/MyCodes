#include <bits/stdc++.h> 
using namespace std;
#define ll long long

ll primeFactors(ll n) {
    ll sum=0;
    while (n % 2 == 0) { 
        sum += 2; 
        n = n/2; 
    } 
    for (ll i = 3; i <= sqrt(n); i = i + 2){ 
        while (n % i == 0){ 
            sum += i; 
            n = n/i;
        }
    }
    if (n > 2) 
        sum += n;
    return sum; 
}

void solve(){
    ll n;
    cin>>n;
    if (n==1){
        cout<<1<<endl;
        return;
    }else{
        cout<<primeFactors(n)<<endl;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}