/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define md 1000000007
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
ll maketree(ll tree[],ll curloc,ll arr[],ll lef,ll rit)
{
    if(lef==rit)
    {
        tree[curloc]=arr[rit];
        return arr[rit];
    }
  else { ll mid=(lef+rit)/2;
    tree[curloc]=(maketree(tree,2*curloc+1,arr,lef,mid)%md+maketree(tree,2*curloc+2,arr,mid+1,rit)%md)%md;
    return tree[curloc];
    }
}
ll sum_in_range(ll tree[],ll curnode,ll rL,ll rR,ll l,ll r)
{
  if(l<=rL && r>=rR )
      return tree[curnode];

  if(rR<l || rL>r)
   return 0;

   else 
   {
       ll mid=(rL+rR)/2;
       return (sum_in_range(tree,2*curnode+1,rL,mid,l,r)%md+sum_in_range(tree,2*curnode+2,mid+1,rR,l,r)%md)%md;
   }
 
}
void update_element(ll tree[],ll curnode,ll rL,ll rR,ll pos,ll diff)
{
    if(rL>pos || rR <pos )
      return;

    else 
    {
        tree[curnode]+=diff;
        if(rR!=rL)
        {
            ll mid=(rR+rL)/2;
            update_element(tree,2*curnode+1,rL,mid,pos,diff);
            update_element(tree,2*curnode+2,mid+1,rR,pos,diff);
        }
    }
}

int main(){
 fast();
 new_int_2(n,q);
 array(arr,n);
 rep(i,0,n)
 {
     arr[i]=(arr[i]*arr[i])%md;
 }
 ll tree[4*n]={};
  maketree(tree,0,arr,0,n-1);
  //rep(i,0,4*n)cout<<tree[i]<<" ";
  w(q)
  {
      new_int_3(a,l,r);
      if(a==1)
      {
        cout<<(sum_in_range(tree,0,0,n-1,l-1,r-1)%md)<<endl;
      }
      else if(a==2)
      {  ll pre_sum=arr[l-1];
         arr[l-1]=(r*r)%md;
         ll dif=arr[l-1]-pre_sum;
         update_element(tree,0,0,n-1,l-1,dif);
      }
  }
return 0;
}