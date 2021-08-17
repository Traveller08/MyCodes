#include <bits/stdc++.h> 
using namespace std; 
  

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  

int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 
  

int main() 
{   
    int s,q,j,x;
    cin>>s>>q;
    int arr[s] ;
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=q;i++)
    {
        cin>>j>>x;
        arr[j-1]*=x;
        arr[j-1]=arr[j-1]%1000000007;
        int g = sizeof(arr) / sizeof(arr[0]); 
        cout << (findGCD(arr, g))%1000000007 << endl; 
       
    }
   
    
    return 0; 
}