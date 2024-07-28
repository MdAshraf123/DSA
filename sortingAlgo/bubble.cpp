#include<iostream>
using namespace std;
void bubble1(int arr[],int size){ 
    for(int i=0;i<size-1;i++){
        int bubble=arr[0];
        for(int j=0;j<size-1-i;j++){
            if(bubble<=arr[j+1]){
                bubble=arr[j+1];
            }else{ 
                arr[j]=arr[j+1];
                arr[j+1]=bubble;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}
void bubble2(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<' ';
    }
}
int main(){
int arr[5]={3,53,21,3,75};
bubble2(arr,5);

 

    return 0;
}