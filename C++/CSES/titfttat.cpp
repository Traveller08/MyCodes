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
    new_int_1(t);
    w(t)
    {
        new_int_1(n);
        array(arr, n);

        bool found = 0;
        stack<ll> st;
        st.push(arr[0]);
        bool first = 0;
        rep(i, 1, n)
        {
            if (arr[i] == arr[i - 1])
            {
                found = true;
                break;
            }
        }
        bool thif = 0;
        if (!found)
        {
            ll ind1 = 0, ind2 = 0, ind3 = 0, no = 0;
            for (ll i = 0; i < n - 2; i++)
            {
                if (arr[i] ^ arr[i + 1] == arr[i + 2])
                {
                    ind1 = i;
                    ind2 = i + 1;
                    ind3 = i + 2;
                    no = arr[i + 2];
                    if(i+3<=n-1 && arr[i+3]==no)
                }
                if (found)
                    break;
            }
        }
       
        if (!found)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}