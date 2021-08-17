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
string s;
cin>>s;
ll i=0;
string state="N";
ll gear=0;
cout<<state<<" | "<<gear<<" => ";
rep(i,0,s.length())
{
    switch (s[i])
    {
    case 'L':
        switch (state[0])
        {
        case 'N':
            state="NW";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "NW":
            state="W";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "W":
            state="SW";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "SW":
            state="S";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "S":
            state="SE";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "SE":
            state="E";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "E":
            state="NE";
            cout<<state<<" | "<<gear<<" => ";
            break;
        case "NE":
            state='N';
            cout<<state<<" | "<<gear<<" => ";
            break;
           }
        break;
    case 'R':
     switch (state[0])
     {
      case 'N':
            state="NE";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "NE":
            state="E";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "E":
            state="SE";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "SE":
            state="S";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "S":
            state="SW";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "SW":
            state="W";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "W":
            state="NW";
            cout<<state<<" | "<<gear<<" => ";
            break;
    case "NW":
            state='N';
            cout<<state<<" | "<<gear<<" => ";
            break;
     
     
     }
        
        break;
    case 'A':
      if(gear<5)
       gear++;
       cout<<state<<" | "<<gear<<" => ";
        break;
    case 'B':
        if(gear>0)
         gear--;
         cout<<state<<" | "<<gear<<" => ";
        break;
    
   
    }
}
  cout<<endl;  
}

 return 0;
}