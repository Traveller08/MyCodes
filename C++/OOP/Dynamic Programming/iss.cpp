/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Author : Ankit Chaudhary ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define um(a, b, name) unordered_map<a, b> name;
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n, 1) cin >> arr[i];
#define ni1(t) \
    ll t;      \
    cin >> t;
#define ni2(a, b) \
    ll a, b;      \
    cin >> a >> b
#define ni3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c
#define ni4(a, b, c, d) \
    ll a, b, c, d;      \
    cin >> a >> b >> c >> d
#define ni5(a, b, c, d, e) \
    ll a, b, c, d, e;      \
    cin >> a >> b >> c >> d >> e
#define ni6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;      \
    cin >> a >> b >> c >> d >> e >> f
#define ns(s) \
    string s; \
    cin >> s
#define mod 1e9 + 7
#define siz1 200005
#define siz2 1000005
/*----------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                                                                                                            
----------------------------------------------------------------------------------------------------------------------------------------------------------*/

vector<ll> ans(1000000, 0);
vector<ll> adj[1000000];
void precal()
{

    rep(i, 2, 1010, 1)
    {

        rep(j, 2 * i, 1000001, i)
        {

            if (j % i == 0)
                adj[j].push_back(i),adj[j].push_back(i/j);
        }
    }
}
void prec()
{
    rep(i, 5, 1000001, 4)
    {
        ll temp1 = (i - 1) / 2;

        // cout<<i<<" "<<temp1<<endl;
        ll answ = 0;
        ll c1 = 0;
        vector<ll> copy = adj[i];
        vector<ll> no(adj[i].size());
        ll p = adj[i].size();
        for (ll k = 0; k < p; k++)
        {
            ll temp2 = (temp1 / copy[k]);
            no[k] = temp2;
        }

        for (ll k = 0; k < p; k++)
        {
            for (ll j = k + 1; j < p; j++)
            {
                if (__gcd(copy[k], copy[j]) > 1)
                {
                    ll te = ((copy[k] * copy[j]) / __gcd(copy[k], copy[j]));
                    ll com = temp1 / te;
                    no[k] -= com;
                }
            }
        }

        for (ll k = 0; k < p; k++)
        {
            c1 += no[k];
            answ += (no[k] * copy[k]);
        }
        // ll temp2=(temp1/x);
        //   c1+=temp2;

        ll dif = temp1 - c1 - 1;
        answ += dif;
        answ += i;
        temp1 /= 2;
        ans[temp1] = answ;
    }
}

int main()
{
    fast();

    precal();
    prec();

    ni1(t);
    w(t)
    {
        ni1(k);
        cout << ans[k] << "\n";
    }
    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/