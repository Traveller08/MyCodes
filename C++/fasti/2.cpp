#include<bits/stdc++.h>
using namespace std;

int main(){

    int extras1,  days, rent;
     string str1,profession; 

    cout<<"*******Welcome to Devil`s villa*******\ntype 0 to continue  -:) ";
    cin>>extras1;
    if(extras1!=0){
          return 0;
    }

    cout<<"kindly enter your details: \nname: ";
    cin.ignore();
    getline(cin,str1);
    cout<<"profession: ";
    cin>>profession;
    cout<<"number of days you are going to stay here: ";
    cin>>days;
    rent=1000*days;
    cout<<"your rent for "<<days<<" days is : "<<rent<<"\n";
    cout<<"kindly verify if your details are correct or not ? \n";
    cout<<"name : "<<str1<<"\n";
    cout<<"profession is :"<<profession<<"\n";
    cout<<"days :"<<days<<"\n";
    cout<<"rent :"<<rent<<"\n";
   

   

  return 0;

}