#include <stdio.h>
#define maxSize 10001
void main()
{
  printf("Enter an even number >=4 : ");
  int n;
  while(1){
       scanf("%d",&n);
       if(n<4){
         printf("Should be >=4. Re-enter : ");
       }
       else if(n%2!=0 && n>=4){
         printf("%d is not even. Re-enter : ",n);
       }
       else break;
  }

  int prime[10005];
  for(int i=0;i<maxSize;i++)prime[i]=1;
  prime[0]=0;
  prime[1]=0;
  for(int i=2;i<=maxSize;i++){
    if(prime[i]==1){
      for(int j=i*i;j<=maxSize;j+=i){
        prime[j]=0;
      }
    }
  }
  for(int i=2;i<=n;i++){
    for(int j=i;j<=n;j++){
      if(prime[i]==1 && prime[j]==1 && i+j==n){
        printf("%d = %d + %d \n",n,i,j);
      }
    }
  }
}