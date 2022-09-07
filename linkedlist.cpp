#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *removeDuplicates(Node *head)
{
Node *temp = head;
Node *removable; 
map<int,int> freq;
while(temp->next->next!=NULL)
{
    freq[temp->data]++;
    if(temp->data == temp->next->data && temp->next->data == temp->next->next->data)
    {
        
        removable = temp->next->next;
        delete temp->next;
        temp->next = removable->next;
        delete removable;
        
    }
    else
       temp = temp->next;
}
return head;
}

int main(){
    Node* root = new Node(1);
    root->next = new Node(2); 
    root->next->next = new Node(2); 
    root->next->next->next = new Node(2); 
    root->next->next->next->next = new Node(3); 
    root->next->next->next->next->next = new Node(3); 
     root->next->next->next->next->next->next = new Node(4); 
    // root->next = new Node(5); 
    Node* ans = removeDuplicates(root);
   while(ans!=NULL){
    cout<<ans->data<<" ";
    ans=ans->next;
   }
    return 0;
}


// if(d<n || divided=true)






// //Function to remove duplicates from sorted linked list.

//  // your code goes here

// //  Node* temp = head;
// //  while(temp != NULL || temp->next != NULL){
    
// //      if(temp->data == temp->next->data){
// //           Node* prev = temp;
// //          while(prev->data == prev->next->data){
// //              prev = prev->next;
// //          }
// //          temp->next = prev->next;
// //      }
// //      temp= temp->next;
// //  }
// //  return head;
// // }

// // your code goes here
// if(divided){
//     continue;
// }

