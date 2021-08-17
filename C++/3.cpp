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
ll lilysHomework(ll arr[] , ll size) {
    int asc[size] , ar[size];
    map <ll , ll> store;
    rep(i,0,size) {
        store[arr[i]] = i;
        asc[i] = arr[i];
        ar[i] = arr[i];
    }
    sort(asc , asc+size);
    ll p = 0 ,q = 0;
   rep(i,0,size) {
        if(asc[i] != arr[i]) {
        
            p++;
            store[arr[i]] = store[asc[i]];
         
            swap(arr[i] , arr[store[asc[i]]]);
        }
    }
   
    store.clear();
    std::reverse(ar , ar+size);
   rep(i,0,size) {
        store[ar[i]] = i;
    }
    rep(i,0,size) {
        if(asc[i] != ar[i]) {
          
           q++;
            store[ar[i]] = store[asc[i]];
        
            swap(ar[i] , ar[store[asc[i]]]);
        }
    }
   
    return min(p,q);
}

int main() {
    new_int_1(n);
    array(arr,n);
  
    cout << lilysHomework(arr, n);
    return 0;
}