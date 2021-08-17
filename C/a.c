#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
   int c=a<b?a:b;
   int ans=0;
   for(int i=1;i<=c;i++){
          if(a%i==0 && b%i==0)ans=i;
   }
   return ans;
}
int no_of_digits(int n){
  int ans=0;
  while(n>0){
    ans++;
    n/=10;
  }
  return ans;
}

int main(){
int t;
scanf("%d",&t);
while (t--)
{
  int no,dec=0,num=0,denom=1,common;
  scanf("%d.%d",&no,&dec);
  num=no;
  if(dec==0){
    denom=1;
    }
  else{
  denom=pow(10,no_of_digits(dec));
 common= gcd(dec,denom);
  printf("%d %d\n",denom,common);
 dec/=common;
 denom/=common;}
int imp=(denom*no)+dec;
 printf("[%d/%d] [%d %d/%d]",imp,denom,no,dec,denom);
}
  return 0;
}
1.2
1 2/10
1 1/5
[5*1+1/5] [1 1/5]