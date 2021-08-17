#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

 stack<pair<ll,ll>>arr;
 for(ll i=0;i<10;i++){
     arr.push(make_pair(i,i+1));
 }
// while(!arr.empty()){
    arr.pop();
    //arr.push(9);
   //  cout<<" "<<arr.top()<<" ";
    // arr.pop();

// }
cout<<arr.top().first<<" "<<arr.top().second;
    return 0;
}