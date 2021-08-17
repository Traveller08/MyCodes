#include<bits/stdc++.h>
using namespace std;
bool winner(char arr[][3],char w)
{
     if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2]==w)return true;        
     if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2]==w)return true;
     if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2]==w)return true;
     if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0]==w)return true;
     if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1]==w)return true;
     if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2]==w)return true;
     if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2]==w)return true;
     if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0]==w)return true;
     return false;   
}
bool possible(char arr[][3],int x,int o)
{
   if(x==o || x==o+1)
   {
       if(winner(arr,'O'))
       {
           if(winner(arr,'X'))return false;
           if(x==o)return true;
           return false;
       }
       if(winner(arr,'X') && x!=o+1)return false;
       return true;
   }
   return false;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
      char arr[3][3];
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              cin>>arr[i][j];
          }
      }
      int o=0,x=0,dash=0;
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
             if(arr[i][j]=='X')x++;
             if(arr[i][j]=='O')o++;
             if(arr[i][j]=='_')dash++;
          }
      }
      if(possible(arr,x,o))
      {
          if(!winner(arr,'X') && !winner(arr,'O') && dash>=1)cout<<2<<endl;
          else cout<<1<<endl;
      }
      else cout<<3<<endl;
    }
    return 0;
}