#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define rept(i, a, b) for (auto i = a; i != b; ++i)
#define drep(i, a, b, k) for (ll i = a; i >= b; i--)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n)          \
    vector<ll> arr(n);         \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
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
#define getmax(a, b) a > b ? a : b
#define getmin(a, b) a < b ? a : b
#define print(x)               \
    for (auto ele : x)         \
        cout << ele << '	'; \
    cout << "\n";
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs << '	' << ele.second << "\n"
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
random_device rd;                                       // obtain a random number from hardware
mt19937 gen(rd());                                      // seed the generator
uniform_int_distribution<> distr(100000000, 276858676); // define the range
ll no_of_user=0;
 ll total = 0;
map<ll,tuple<ll,ll,ll>>store;

class user
{
public:
    string name;
    ll total_ammount;
    ll code;
    ll rate;
    ll quantity;
    ll size;

public:
    void enter_name()
    {
        ns(s);
        name = s;
    }

public:
    void ammount(ll at)
    {
        total_ammount = at;
    }

public:
    void print_details()
    {
        cout << "Name : " << name << "\n";
        cout << "Details : " << "\n";
        cout << "---------------------------------------------------------------------------------------------------------------------------" << "\n";
        cout << "|          Product code          |      Quantity      |       Size            |       Rate            |         Ammount    |" << "\n";
        cout << "----------------------------------------------------------------------------------------------------------------------------" << "\n";
    }

public:
    ll price()
    {
        return rate * quantity;
    }

// public:
//     void print_item_details()
//     {
//         cout << "|      " << code << "                 |          " << quantity << "        |         " << size << "            |              " << rate << "      |      " << price() << "          |" << "\n";;
//         ;
//         cout << "---------------------------------------------------------------------------------------------------------------------------------" <<"\n";;
//     }
    void print_ammount()
    {
        cout << "|                                           Total Ammount            |                           " << total_ammount << "                             |" << "\n";;
        cout << "--------------------------------------------------------------------------------------------------------------------------------------" << "\n";;
    }
};
class product : public user
{
public:
    void Enter_produxt_details()
    {   cout<<"Item "<<no_of_user+1<<" : details "<<endl;
        cout<<"Rate : ";ll b;cin>>b;
         cout<<"Quantity : ";ll c;cin>>c;
          cout<<"Size : ";ll d;cin>>d;
        code = distr(gen);
        rate = b;
        quantity = c;
        size = d;
        store[code]=make_tuple(b,c,d);
    }
};
void print_bill()
{
    
     for(auto it=store.begin();it!=store.end();++it)
     {
          cout << "|      " << it->first << "                 |          " << get<1>(it->second) << "        |         " <<  get<2>(it->second)<< "            |              " <<  get<0>(it->second)<< "      |      " <<  ( get<1>(it->second))*( get<2>(it->second))<< "          |" << "\n";;
         ;
        cout << "---------------------------------------------------------------------------------------------------------------------------------" <<"\n";;
        total+=( get<1>(it->second))*( get<2>(it->second));
     }
   
}

int main()
{
    
     cout << "Enter your name: ";
    user user1;
   
    user1.enter_name();
    cout << "Enter no of items purchased : ";
    ni1(n);
    
    w(n)
    {
        product pro1;
        pro1.Enter_produxt_details();
        total += pro1.price();
        no_of_user++;
    }
     user1.print_details();
    print_bill();
      user1.ammount(total);
    user1.print_ammount();
    
    khatam;
}