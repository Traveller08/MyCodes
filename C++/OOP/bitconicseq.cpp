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
    new_int_2(n, q);
    array(arr, n);
    while (q--)
    {
        new_int_3(x, l, r);

        if (x == 1)
        {
            ll ans = 0;
            rep(i, l, r )
            {
                ll count = 0;
                if (arr[i] > arr[i - 1])
                {
                    count += 2;
                    ans=max(ans,count);
                    bool flag = 0;
                    ll index = 0;
                    rep(j, i + 1, r)
                    {
                        if (arr[j] > arr[j - 1])
                        {
                            count++;
                            ans = max(ans, count);
                        }
                        else
                        {
                            flag = 1;
                            index = j;
                            break;
                        }
                    }
                    if (flag)
                    {
                        rep(j, index, r )
                        {
                            if (arr[j] < arr[j - 1])
                            { 
                                count++;
                                ans=max(ans,count);
                            }
                            else
                            {   ans=max(ans,count);
                               i=j-1;
                               count=0;
                                break;
                            }
                        }
                    }
                    else {
                        ans=max(ans,count);
                        count=0;
                        break;
                    }

                }
                else if(arr[i]<arr[i-1])
                {
                    count+=2;
                    ans=max(ans,count);
                    rep(j,i+1,r)
                    {
                        if(arr[j]<arr[j-1])
                        {
                            count++;
                            ans=max(ans,count);
                        }
                        else
                        {
                            i=j-1;
                            ans=max(ans,count);
                            count=0;
                            break;
                        }
                    }
                }
                else 
                {
                    count=0;
                    ans=max(ans,count);
                }
             

            }
            cout<<ans<<endl;
        }
        else if (x == 2)
        {
            arr[l - 1] = r;
          //  rep(i,0,n)cout<<arr[i]<<" ";cout<<endl;
        }
    }
    return 0;
}