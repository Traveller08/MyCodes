#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
   long long int t,n,e,h,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>e>>h>>a>>b>>c;
       long long int maxi=min(e,min(h,n));
       long long int x2,x3;long long int sum=LONG_MAX;
       if(e/2>=n)sum=min(sum,n*a);
       if(h/3>=n)sum=min(sum,n*b);
       if(maxi>=n)sum=min(sum,n*c);
       int arr[3];arr[0]=a;arr[1]=b;arr[2]=c;sort(arr,arr+3);
       for(int x1=0;x1<=maxi;x1++)
       {
           x2=(e-x1)/2;
           x3=(h-x1)/3;
           if(x1+x2+x3==n)
           sum=min(sum,x1*c+x2*a+x3*b);

           if(x1+x3>=n&&x1<n&&x3<n)
           {
               if(c<=b)
               sum=min(sum,x1*c+(n-x1)*b);
               else
               sum=min(sum,x3*b+(n-x1)*c);
               
           }
           if(x1+x2>=n&&x1<n&&x2<n)
           {
               if(c<=a)
               sum=min(sum,x1*c+(n-x1)*a);
               else
               sum=min(sum,x2*a+(n-x2)*c);
           }
           if(x2+x3>=n&&x2<n&&x3<n)
           {
               if(b<=a)
               sum=min(sum,x3*b+(n-x3)*a);
               else
               sum=min(sum,x2*a+(n-x2)*b);
               
           }
           if(x1+x2+x3>n&&x1<n&&x2<n&&x3<n)
           { 
               if(x1+x2<n&&x2+x3<n&&x3+x1<n)
               {cout<<x1<<" "<<x2<<" "<<x3<<endl;
               cout<<x1*c+x2*a+(n-x2-x1)*b<<endl;
               cout<<x1*c+x3*b+(n-x1-x3)*a<<endl;
               cout<<x2*a+x3*b+(n-x2-x3)*c<<endl;
               cout<<sum<<endl;
               sum=min(sum,x1*c+x2*a+abs(n-x1-x2)*b);//cout<<sum<<endl;
               sum=min(sum,x1*c+x3*b+abs(n-x1-x3)*a);//cout<<sum<<endl;
               sum=min(sum,x2*a+x3*b+abs(n-x2-x3)*c);//cout<<sum<<endl;
               
               }
               cout<<sum<<endl;
           }
          // cout<<sum<<endl;
           

       }
    //   cout<<sum<<endl;
       
    }
}