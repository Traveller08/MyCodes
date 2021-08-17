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
void decToBinary(int n,ll dem[])
{ //cout<<n<<endl;
    int binaryNum[32]={};
 
    
    int i = 0;
    while (n > 0) {
 
     
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
//for(ll j=0;j<i;j++)cout<<binaryNum[j]<<" ";cout<<endl;
   
     for(ll j=0;j<i;j++)
     {
        if(binaryNum[j]==1)dem[j]++;
     }
}

void update(ll dem[],ll re)
{
    int binaryNum[32]={};
 
    
    int i = 0;
    while (re > 0) {
 
     
        binaryNum[i] = re % 2;
        re = re / 2;
        i++;
    }
   // for(ll  j=i-1;j>=0;j--)cout<<binaryNum[j]<<" ";cout<<endl;
   
    for(ll j=0;j<i;j++)
    {
        if(binaryNum[j]==1 && dem[j]>0)dem[j]--;
    }
}
ll answer(ll dem[])
{ll sum=0;
 // cout<<"fun"<<endl;
    for(ll i=0;i<32;i++)
    {// cout<<dem[i]<<" ";
        if(dem[i]>0)sum+=(pow(2,i));
        
    }//cout<<endl;
    return sum;
}
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_2(n,q);
       ll dem[32]={};
      array(arr,n);
      rep(i,0,n)decToBinary(arr[i],dem);
         cout<<answer(dem)<<endl;
    w(q){
          ll rt,yt;
          cin>>rt>>yt;
        
          update(dem,arr[rt-1]);
       
         decToBinary(yt,dem);
         
         
              arr[rt-1]=yt;
          cout<<answer(dem)<<endl;
      
    } 
    

 }
 return 0;
}