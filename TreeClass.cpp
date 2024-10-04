#include<iostream>
using namespace std;
class Node;
class Tree{
    public:
    Node* createTree();
    Node* appendNode(Node * root,int);
    void inOrderTraversal(Node * root);
};
class Node: public Tree{
    int data;
    Node * left;
    Node * right;
    public:
    Node(int d):data(d){};
    Node* createTree(){
        Node * root;
        int x;
        cout<<"Enter data- ";
        cin>>x;
        if(x==0){
            return NULL;
        }
        root=new Node(x);
        cout<<"Enter data in left of "<<x<<endl;
        root->left=createTree();
        cout<<"Enter data in right of "<<x<<endl;
        root->right=createTree();
        return root;
    }

    Node * appendNode(Node * root,int data){
        if(root==NULL) 
        return new Node(data);
        if(data<root->data)
        root->left=appendNode(root->left,data);
        else
        root->right=appendNode(root->right,data);

        return root;
    }
    void inOrderTraversal(Node * root){
        if(root==NULL)
        return ;
        inOrderTraversal(root->left);
        cout<<root->data<<" 8";
        inOrderTraversal(root->right);
    }
};
int main(){
    Node * root=NULL;
    
    root=root->createTree();
    root->inOrderTraversal(root);
    

    
    return 0;
}