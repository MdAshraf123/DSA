#include<iostream>
class heap{
    int arr[100];
    int size;
    public:
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insertNode(int key){
        size+=1;
        arr[size]=key;
        int index=size;
        while(index>1 && arr[index/2]<key){
            std::swap(arr[index],arr[index/2]);
            index=index/2;
        }
    }
    void deleteNode(){
        int d=arr[1];
        arr[1]=arr[size];
        size-=1;
        int i=1;
        
        while(2*i<=size){
            int lChild=2*i,rChild=2*i+1;
            int larger=lChild;
            if(rChild <=size && arr[larger]<arr[rChild]){
                larger=2*i+1;
            }
            if(arr[i]<arr[larger]){
                std::swap(arr[i],arr[larger]);
            }
            i=larger;
        }
    }
    void display(){
        for(int i=1;i<=size;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
    void heapify(int arr[],int n,int i){
        int larger=i;
        int left=2*i,right=2*i+1;
       
        if(left<size  &&   arr[larger]<arr[left])
            larger=left;

        if(right<size && arr[larger]<arr[right]){
            larger=right;
        }
    
        if(larger !=i){
            std::swap(arr[larger],arr[i]);
            heapify(arr,n,larger);
        }
    }
    void heapify(int i,int arr[],int size){
        int larger=2*i;
        int left=2*i,right=2*i+1;
        if(larger>size){
            return;
        }
        if(right<=size && arr[larger]<arr[right]){
            larger=right;
        }
        if(arr[larger]>arr[i]){
            std::swap(arr[larger],arr[i]);
        }
        heapify(larger,arr,size);

    }
};
int main(){
    heap h;
    // h.insertNode(18);
    // h.insertNode(53);
    // h.insertNode(24);   
    // h.insertNode(12);
    // h.insertNode(22);
    // h.insertNode(57);
    // h.insertNode(38);
    // h.insertNode(89);
    // h.display();
    // h.deleteNode();
    // h.display();
    int a[9]={23,54,65,86,45,32,90,76,23};
    for(int i=4;i>=0;i--){
        h.heapify(i,a,8);
    }
    for(int j=0;j<9;j++){
        std::cout<<a[j]<<" ";
    }
    

    return 0;
}