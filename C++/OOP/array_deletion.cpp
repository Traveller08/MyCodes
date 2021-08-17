#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll test;
  cout<<"Enter no of test cases: ";
  cin>>test;
  while (test--)
     { ll size,key;
    cout<<"Enter array Size: ";
    cin>>size;
    ll arr[size],brr[size];
    cout<<"Enter array Elements : ";
    for(ll i=0;i<size;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    cout<<"Enter the index you want to delete: ";
    cin>>key;
    
     for(ll i=key;i<size-1;i++){
        arr[i]=arr[i+1];
    }
     cout<<"Array before deletion: ";
     for(ll i=0;i<size;i++)
        cout<<brr[i]<<" ";
        cout<<endl;
    cout<<"Array after the deletion process: ";
     for(ll i=0;i<size-1;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        }
    return 0;
}