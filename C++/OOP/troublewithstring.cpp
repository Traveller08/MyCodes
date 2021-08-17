/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n) cin >> arr[i];
#define new_int_1(t) \
    ll t;            \
    cin >> t;
#define new_int_2(a, b) \
    ll a, b;            \
    cin >> a >> b
#define new_int_3(a, b, c) \
    ll a, b, c;            \
    cin >> a >> b >> c
#define new_int_4(a, b, c, d) \
    ll a, b, c, d;            \
    cin >> a >> b >> c >> d
#define new_int_6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;            \
    cin >> a >> b >> c >> d >> e >> f
#define new_str(s) \
    string s;      \
    cin >> s
int main()
{
    fast();
    new_int_1(n);
    string arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    map<ll, vector<tuple<ll, ll,ll>>> store;
    // map[count of b] < no of subseq of ab,index>
    rep(i, 0, n)
    {
        ll count = 0;
        ll subseq=0;ll counta=0;
        for (ll j = arr[i].length() - 1; j >= 0; j--)
        {   if(arr[i][j]=='b')count++;
            if (arr[i][j] == 'a')
            {   counta++;
                subseq+=count;}
                
        }
        store[count].push_back(make_tuple(-counta,-subseq,i));
    }
 /*   for( auto it=store.begin();it!=store.end();++it)
    {
        cout<<it->first<<" : ";
        for( auto itr=it->second.begin();itr!=it->second.end();++itr)
        {
            cout<<itr->first<<" "<<itr->second<<" "<<endl;
        }
        cout<<endl;
    } */
   
    string ans = "";
    
    for( auto it=store.begin();it!=store.end();++it)
    {   sort(it->second.begin(),it->second.end());
        ll a=it->second.size();
        for(ll i=0;i<a;i++)
        {
            ans+=arr[get<2>(it->second[i])];
        }
        
   }
  /*  for( auto it=store.begin();it!=store.end();++it)
    {
        cout<<it->first<<" : ";
        for( auto itr=it->second.begin();itr!=it->second.end();++itr)
        {
            cout<<itr->first<<" "<<itr->second<<" "<<endl;
        }
        cout<<endl;
    } */
    ll m = ans.length();

    ll noba = 0;
    ll finalans = 0;
    for (ll i = m; i >= 0; i--)
    {
        if (ans[i] == 'b')
            noba++;
        if (ans[i] == 'a')
        {
            finalans += noba;
        }
    }
    cout << ans << endl;
    cout << finalans << endl;

    return 0;
}