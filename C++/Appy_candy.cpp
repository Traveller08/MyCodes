#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int ans=0,person=0;
    map<string,int>store;

    while( getline(cin,str)){
       
      int temp_ans=0;bool check=0;
    
        string str1;

      if(str[0]=='+'){
             str1=str.substr(1,str.length());
            store[str1]++;
           
               
      }
       else if(str[0]=='-'){
              str1=str.substr(1,str.length());
          store[str1]--;
        
             
       }
    
        for(auto it = store.begin(); it != store.end(); )
        if(it->second == 0)
            it = store.erase(it);
        else
            ++it;

int index=str.length();
        if(str[0]!='+' || str[0]!='-'){
            
            for(int i=0;i<str.length();i++){
                if(str[i]==':'){
                    index=i;
                   
                   
                    break;}
            }
            if(index!=str.length()-1){
            for(int i=index+1;i<str.length();i++){
                temp_ans++;
            }
            }
           
            ans+=(temp_ans*store.size()); 
        }
      
    }
  printf("%d",ans);

    return 0;
}