#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


    
    
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
         int sum=0;
       if(root==NULL || (root->left==NULL && root->right ==NULL)){
           return 1;
       }
    else{
        if(root->left!=NULL){
           sum+=root->left->data;
       }
       if(root->right!=NULL){
           sum+=root->right->data;
       }
       return(root->data == sum && isSumProperty(root->left) && isSumProperty(root->right));
       
    }
    }
       
    int main(){
        Node* node = new Node(5);
        node->left = new Node(2);
        node->right = new Node(3);
        node->right->right = new Node(1);
        node->right->left = new Node(2);
        node->left->left = new Node(1);
        node->left->right = new Node(1);
        if(isSumProperty(node)==1){
            cout<<"Passed"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
        return 0;
    }       