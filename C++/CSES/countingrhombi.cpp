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
int main(){
 fast();
 new_int_2(w,h);
 ll len=w,wid=h;
 ll noW=log2(w);
 ll noH=log2(h);
 ll m=min(noH,noW);
 ll ans=0;
 cout<<m<<" "<<len<<" "<<wid<<" "<<m<<" "<<endl;
 for(ll i=1;i<=m;i++)
 { 
     ans+=((len-pow(2,i)+1)*(wid-pow(2,i)+1));
     ll o=((len-pow(2,i)+1)*(wid-pow(2,i)+1));
     cout<<o<<" "<<ans<<endl;
 }
 cout<<ans<<endl;
 return 0;
}




#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
 map<string,ll>mp;
    for(auto it=strings.begin();it!=strings.end();++it)
    {
        mp[*it]++;
    }
    vector<int>ans;
    for(auto it=queries.begin();it!=queries.end();++it)
    {
        ans.push_back(mp[*it]);
    }
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
