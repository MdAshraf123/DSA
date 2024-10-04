#include<iostream>
#include<vector>
struct Node{
    int data;
    Node * next;
    Node(int n){
        data=n;
        next=NULL;
    }
};
struct Node * HT[10];

int HF(int key){
    return key%10;
}

void Order(int index,int key){
    if(HT[index]==NULL){
        HT[index]= new Node(key);
        return;   
    }
    Node *ptr=HT[index],*ptr1=ptr;
    if(key < ptr->data){
        HT[index]=new Node(key);
        HT[index]->next=ptr1;
        return;
    }
    while(ptr && ptr->data<key){
        ptr1=ptr;
        ptr=ptr->next;   
    }
    Node * t=new Node(key);
    ptr1->next=t;
    t->next=ptr;
}

void insertNode(Node * HT[],int key){
    int index=HF(key);
    Order(Node * HT[],key);
}


bool isExist(Node * root,int key){
    if(root==NULL){
        std::cout<<"There no element exists! "<<std::endl;
        return false;
    }
    while(root!=NULL && root->data != key ){
        root=root->next;
    }
    if(root && root->data==key){
        return true;
    }else{
        return false;
    }
}

void showNode(Node * root){
    for(;root!=NULL;root=root->next){
        std::cout<<root->data<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    for(int i=0;i<10;i++){
        HT[i]=NULL;
    }
    insertNode(45);
    insertNode(25);
    insertNode(15);
    insertNode(65);
    insertNode(67);
    insertNode(37);
    insertNode(97);
    showNode(HT[7]);
    // std::cout<<isExist(5);
    return 0;
}