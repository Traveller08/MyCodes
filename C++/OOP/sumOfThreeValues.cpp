#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

int main()
{
    fast();
    unordered_map<ll, ll> store;
    ll n,x;cin>>n>>x;
    ll count = 0;

    for(ll i= 0;i< n;i++)
    {
        count++;
        ll a;
        cin >> a;

        store[a] = count;
    }
    
    bool found = 0;
    ll pos1 = 0, pos2 = 0, pos3 = 0;
    for (auto it = store.begin(); it != store.end(); ++it)
    {
        for (auto itr = store.begin(); itr != store.end(); ++itr)
        {
            if (it->second != itr->second && itr->second != 0 && it->second != 0)
            {
                if (store[x - it->first - itr->first] != 0 && store[x - it->first - itr->first] != it->second && store[x - it->first - itr->first] != itr->second)
                {  
                    found = true;
                    pos1 = it->second;
                    pos2 = itr->second;
                    pos3 = store[x - it->first - itr->first];
                    break;
                }
            }
        }
    }
    if (!found)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        ll arr[3] = {};
        arr[0] = pos1;
        arr[1] = pos2;
        arr[2] = pos3;
        sort(arr, arr + 3);
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
    return 0;
}