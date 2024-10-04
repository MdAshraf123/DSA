#include<iostream>
using namespace std;
 
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int a){
        data=a;
        left=NULL;
        right=NULL;
    }
};

Node * createTree(){
    Node * root;
    int x=0;
    cout<<"Enter data- ";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    root=new Node(x);
    cout<<"Enter data in left of "<<x<<endl;
    root->left=createTree();
    cout<<"Enter data in right of "<<x<<endl;
    root->right=createTree();
    return root;
}

Node* insertNode(Node * root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data < root->data){
        root->left=insertNode(root->left,data);
    }else{
        root->right=insertNode(root->right,data);
    }
    return root;
}

void inOrderTraversal(Node * root){
    if(root==NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node * root){
    if(root==NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}


int main(){
Node * root=NULL;
root= createTree();
inOrderTraversal(root);
    return 0;
}