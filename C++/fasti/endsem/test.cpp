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
#define new_str(s) \
    string s;      \
    cin >> s
int main()
{
    fast();
    new_int_1(t);
    ll test=0;
    w(t)
    {
        new_int_2(r, c);
        ll arr[r][c];
        vector<pair<ll, ll>> valid_pair;
        rep(i, 0, r)
        {
            rep(j, 0, c)
            {
                cin >> arr[i][j];
            }
        }
        rep(i, 0, r )
        {
            rep(j, 0, c )
            {   //bool flag=0;
                if (arr[i][j] == 1)
                {  ll one=0;
                    if((i>0 && i< r-1) && (j>0 && j<c-1)){
                       if(arr[i][j+1]==1 && arr[i+1][j]==1)one++;
                        if(arr[i][j-1]==1 && arr[i+1][j]==1)one++;
                         if(arr[i-1][j]==1 && arr[i][j+1]==1)one++;
                        if(arr[i-1][j]==1 && arr[i][j-1]==1)one++;
                        if(one>=1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if (i==0 && j==0){
                     
                        if(arr[i+1][j]==1 && arr[i][j+1]==1 )valid_pair.push_back(make_pair(i,j));
                    }
                    else if(i==0 && j==c-1){
                      
                        if(arr[i+1][j]==1 && arr[i][j-1]==1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if(j==0 && i==r-1){
                     
                        if(arr[i][j+1]==1 && arr[i-1][j]==1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if(i==r-1 && j==c-1){
                      
                        if(arr[i-1][j]==1 && arr[i][j-1]==1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if(i==0  && j!=0 && j!=c-1){
                         ll one=0;
                     
                        if(arr[i][j+1]==1 && arr[i+1][j]==1)one++;
                        if(arr[i][j-1]==1 && arr[i+1][j]==1)one++;
                        if(one>=1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if(i==r-1 && j!=0 && j!=c-1){
                             ll one=0;
                        if(arr[i-1][j]==1 && arr[i][j+1]==1)one++;
                      
                        if(arr[i-1][j]==1 && arr[i][j-1]==1)one++;
                       
                        if(one>=1)valid_pair.push_back(make_pair(i,j));
                    }
                    else  if(j==0 && i!=0 && i!=r-1){
                            ll one=0;
                        if(arr[i-1][j]==1 && arr[i][j+1]==1)one++;
                        if(arr[i+1][j]==1 && arr[i][j+1]==1)one++;
                    
                        if(one>=1)valid_pair.push_back(make_pair(i,j));
                    }
                    else if(j==c-1 && i!=0 && i!=r-1){
                                ll one=0;
                        if(arr[i-1][j]==1 && arr[i][j-1]==1)one++;
                        if(arr[i+1][j]==1 && arr[i][j-1]==1)one++;
                
                        if(one>=1)valid_pair.push_back(make_pair(i,j));
                    }
                    
                }

            }
        }
        ll answer=0;
        rep(i,0,valid_pair.size()){
           ll left=0,right=0,up=0,down=0;
           // up
         //  cout<<valid_pair[i].first<<" "<<valid_pair[i].second<<endl;
          
           for(ll j=valid_pair[i].first;j>=0;j--){
              
               if(arr[j][valid_pair[i].second]==1)up++;
               else {                  
                   break;
               }
               
           }
           // down
          
           for(ll j=valid_pair[i].first;j<=r-1;j++){
            
               if(arr[j][valid_pair[i].second]==1)down++;
               else {
                  
                   break;
               }
               
           }
           // left 
          
           for(ll j=valid_pair[i].second;j>=0;j--){
            
               if(arr[valid_pair[i].first][j]==1)left++;
               else{
                  
                   break;
               }
           }
           // right
          
           for(ll j=valid_pair[i].second;j<=c-1;j++){
            
                if(arr[valid_pair[i].first][j]==1)right++;
               else{
                  
                   break;
               }
           }
         //  cout<<left<<" "<<up<<" "<<right<<" "<<down<<endl;
           // up
         
           if(up>=2){
                 if(left>=4){
                     answer+=(min(up-1,(left-2)/2));
                 }
                 if(right>=4){
                     answer+=(min(up-1,(right-2)/2));
                 }
           }
           if(right>=2){
                  if(up>=4){
                     answer+=(min(right-1,(up-2)/2));
                 }
                 if(down>=4){
                     answer+=(min(right-1,(down-2)/2));
                 }
           }
           if(left>=2){
                   if(up>=4){
                     answer+=(min(left-1,(up-2)/2));
                 }
                 if(down>=4){
                     answer+=(min(left-1,(down-2)/2));
                 }
           }
           if(down>=2){
                if(left>=4){
                     answer+=(min(down-1,(left-2)/2));
                 }
                 if(right>=4){
                     answer+=(min(down-1,(right-2)/2));
                 }
           }
           
        }test++;
        cout<<"Case #"<<test<<": "<<answer<<"\n";
    }
    return 0;
}