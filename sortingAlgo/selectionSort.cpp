#include<iostream>
using namespace std;
void selectionSort(int a[],int size){
    int item=0;
    
    for(int i=0;i<size-1;i++){
        item=a[i];
        int k=0;
        for(int j=i+1;j<size;j++){
            if(a[j]<=item){
                item=a[j];
                k=j;
            }
                
        }
        a[k]=a[i];
        a[i]=item;
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<' ';
    }
}

int main(){
int arr[6]={5,4,3,2,1,6};
selectionSort(arr,6)  ;  
    return 0;
}