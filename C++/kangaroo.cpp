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
// sieve of prine
bool prime[1000005];
unordered_map<ll,vector<ll>>ans;
void SieveOfEratosthenes()
{

    memset(prime, true, 1000005);

    for (int p = 2; p * p <= 1000005; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= 1000005; i += p)
                prime[i] = false;
        }
    }

    prime[0] = false;
    prime[1] = false;

    //for (int i = 0; i < 1000000; i++)cout << prime[i] << ' ';
}

void seive()
{
    mem0(ans);
    rep(ll i = 1; i <= 1000005; i++)
    {
      if(!prime[i])  {
            for (ll j = 1; j <= sqrt(i); j++)
            { 
                if(i%j==0)
                {ans[i].push_back(j);
                }
            }
        }
    }
}
unordered_map<ll, ll> pres;
ll func(ll n,ll ft)
{
    if (pres[n] != 0)
        return pres[n];
    if (n == 1)
        return 0;
    if (prime[n])
        return 1;
    return pres[n] = n;
}
int main()
{
    fast();
    SieveOfEratosthenes();
    seive();
    new_int_1(t);
    w(t)
    {

        new_int_2(l, r);
        ll answer = 0;
        for (ll i = l; i <= r; i++)
        {
            vector<ll>pio=ans[i];
            ll si=pio.size();
            for(ll j=0;j<si;j++)
            {
                answer+=(func(pio[j],i));
            }
        }
         
        cout << answer << endl;
        // cout<<ans[4]<<" "<<ans[5]<<endl;
    }
    return 0;
}