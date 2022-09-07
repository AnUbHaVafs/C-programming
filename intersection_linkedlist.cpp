#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

/////////-------> Intersection of two linked lists such that no element will repeat in the new list-------



Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL|| head2==NULL){
        return NULL;
    }
    Node* head = new Node(-1);
    Node* curr = head;
    map<int,int> freq;
    
    while(head1 && head2){
        if(head1->data < head2->data){
            head1=head1->next;
        }
        else if(head2->data < head1->data){
            head2=head2->next;
        }
        else{
            freq[head1->data]++;
            if(freq[head1->data]<2){

                Node *newnode = new Node(head1->data);
                curr->next = newnode;
                curr = newnode;
            }
           
           
            head1=head1->next;
            head2=head2->next;
        }
        
    }
    return head->next;
    
    
}

void printlist(Node *temp){
    while(!temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int mian(){
    Node *head1 = new Node(2);
    head1->next = new Node(2);
    head1->next->next = new Node(2);
    head1->next->next->next=NULL;

    Node *head2 = new Node(2);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    head2->next->next->next=NULL;


    Node *ans = findIntersection(head1,head2);
    printlist(ans);
    return 0;
}