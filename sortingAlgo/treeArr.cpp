#include<iostream>
#include<vector>
#include<stack>
class Tree{
    private:
    std::vector<int>tree;
    public:
    Tree(int size){
        tree.resize(size,-1);
    }
    void createRoot(int key){
        if(tree[0]==-1){
            tree[0]=key;
        }
        else{
            std::cout<<"root already exist.";
        }
    }
    void createLChild(int key,int i){
        if(tree[i]==-1){
            std::cout<<"Parent do not exist";
            return;
        }
        if(2*i+1>tree.size()){
            std::cout<<"Array is already full";
            return;
        }
        if(tree[2*i+1]!=-1){
            std::cout<<"Its left child already exist";
            return;
        }
        else{
            tree[2*i+1]=key;
        }
    }
    void createRChild(int key,int i){
        if(tree[i]==-1){
            std::cout<<"Parent do not exist";
            return ;
        }
        if(2*i+2>tree.size()){
            std::cout<<"Array has no empty space";
            return ;
        }
        if(tree[2*i+2]!=-1){
            std::cout<<"Its right child already exist";
            return;
        }
        else{
            tree[2*i+2]=key;
        }
    }
    void displayTree(){
        for(int i=0;i<tree.size();i++){
            if(tree[i]!=-1){
                std::cout<<tree[i]<<" ";
            }else{
                std::cout<<"-";
            }
        }
    }
    void inOrderTraversal(){
        std::stack<int>stk;
    }
};
int main(){
   


    return 0;
}