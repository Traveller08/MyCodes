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
ll op(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second%2 > b.second%2;
}
int main()
{
    fast();
    new_int_1(t);
    w(t)
    {
        new_int_3(n, l, r);
        array(arr, n);
        unordered_map<ll, ll> lft;
        unordered_map<ll, ll> rht;
        rep(i, 0, n)
        {
            if (i < l)
                lft[arr[i]]++;
            else if (i >= l)
                rht[arr[i]]++;
        }

        bool flag = 0;
        ll cost = 0;
        // removing perfect pairs
        for (auto it = lft.begin(); it != lft.end(); ++it)
        {
            if (it->second > 0)
            {
                if (rht[it->first] > 0)
                {
                    lft[it->first]--;
                    rht[it->first]--;
                }
            }
        }
        vector<pair<ll, ll>> lt;
        vector<pair<ll, ll>> rt;
        for (auto it = lft.begin(); it != lft.end(); ++it)
        {
            if (it->second > 0)
            {
                lt.push_back(make_pair(it->first, it->second));
            }
        }
        for (auto itr = rht.begin(); itr != rht.end(); ++itr)
        {
            if (itr->second > 0)
            {
                rt.push_back(make_pair(itr->first, itr->second));
            }
        }

        if (l > r)
        {
            sort(lt.begin(), lt.end(), op);
        }
        else if (r >= l)
        {
            sort(rt.begin(), rt.end(), op);
        }

        ll p = 0;
        auto itr = rt.begin();
       // pairing up all the pairs
        if (lt.size() > 0 && rt.size() > 0)
        {    
            for (auto it = lt.begin(); it != lt.end(); ++it)
            {
                if (it->second > 0)
                {
                    if (itr->second > 0)
                    {
                        while (it->second > 0 && itr->second > 0 && itr != rt.end())
                        {
                            if (itr->second >= it->second)
                            {
                                itr->second -= it->second;
                                cost += it->second;
                                it->second = 0;
                                break;
                            }
                            else
                            {
                                it->second -= itr->second;
                                cost += itr->second;
                                itr->second = 0;
                                itr++;
                            }
                        }
                    }
                    else
                    {
                        auto iter = itr;
                        iter++;
                        if (iter != rt.end())
                        {
                            itr++;
                        }
                        else
                            break;
                    }
                }
            }
        }
       

        if (l >= r)
        {  // changing left to right and color 
            for (auto it = lt.begin(); it != lt.end(); ++it)
            {
                if (it->second > 0)
                {
                    ll jk = it->second / 2;
                    it->second -= (jk * 2);
                    cost += jk;
                }
            }
            
            for (auto it = lt.begin(); it != lt.end(); ++it)
            {
                if (it->second > 0)
                {
                    cost += 1;
                }
            }
        }
        else if (r > l)
        {  // changing right t left and color
            for (auto it = rt.begin(); it != rt.end(); ++it)
            {
                if (it->second > 0)
                {
                    ll jk = it->second / 2;
                    it->second -= (jk * 2);
                    cost += jk;
                }
            }
           
            for (auto it = rt.begin(); it != rt.end(); ++it)
            {
                if (it->second > 0)
                    cost += 1;
            }
        }
        cout << cost << endl;
    }
    return 0;
}
