#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(Node*& head, int val)
{
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        return;
    }
 
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* nxt=NULL;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}



Node* middleAndreverse(Node* head){
    Node* slow=head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp;
    if(fast==NULL){
        temp=slow;
    }
    else{
        temp=slow->next;
    }
    Node* second = temp->next;
    temp->next=NULL;
   
    Node* revhead = reverse(head);
    Node* temp2=revhead;
    while(temp2->next){
        temp2=temp2->next;

    }
    temp2->next=second;
    return revhead;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = NULL;
    for(int i=0;i<n;i++){
        insertattail(head, arr[i]);
    }
   

    Node* res = middleAndreverse(head);
    while(res){
        cout<<res->data<<" ";
        res = res->next;
    }
    
    return 0;
}