#include<bits/stdc++.h>

using namespace std;
class node
{

public:
 int data;
 node* next;
};




int main(){
 node* head = NULL;
 node* second = NULL;
 node* third = NULL;
 
 head= new node();
 second= new node();
 third= new node();

 head->data=1;
 second->data=2;
 third->data=3;
 head->next=second;
 second->next=third;
 third->next=NULL;
 node* n=head;
 while (n!=NULL)
 {
   cout<<n->data<<" ";
   n=n->next;
 }
 
  return  0;
}