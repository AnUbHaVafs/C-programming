#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
    Node(int x) { data = x;  next = NULL; }
};




  // function to find the mid node
  Node* midnode(Node* head){
      Node* slow = head;
      Node* fast = head->next;
      while(fast!=NULL && fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          
      }
      return slow;
  }
  
  Node* merge(Node *first, Node *second){
      if(first==NULL){
          return second;
      }
      else if(second==NULL){
          return first;
      }
      Node* headref = NULL;
      if(first->data>second->data){
          headref = first;
          headref->next = merge(first->next,second);
      }
      else{
          headref = second;
          headref->next = merge(first,second->next);
      }
      return headref;
  }
  
  
  
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* first = head;
        Node* mid = midnode(head);
        Node* second = mid->next;
        mid->next = NULL;
        Node* head1 = mergeSort(first);
        Node* head2 = mergeSort(second);
        Node* res = merge(head1,head2);
        return res;
    }

    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        Node* nxt = head->next;
        while(curr && nxt){
            nxt = curr->next;
            curr->next = prev;
            prev= curr;
            curr=nxt;

        }
        return prev;
    }

int main(){
    Node* root = new Node(4);
    root->next = new Node(3);
    root->next->next = new Node(1);
    root->next->next->next = new Node(2);
    root->next->next->next->next = new Node(5);
    Node* ans = mergeSort(root);

    // Node* ans = reverse(result); 
    while(ans){
        cout<<ans->data<<" --> ";
        ans=ans->next;
    }
    cout<<"NULL"<<endl;
    
    return 0;
}