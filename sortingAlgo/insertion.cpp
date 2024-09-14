#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int i=1,j=i-1,key;
    for(;i<size;i++){
         key=arr[i];
        for(;j>=0;j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=key;
    }
    for(int p=0;p<size;p++){
        cout<<arr[p]<<' ';
    }
}
void insertionSort1(int a[],int size){
    int i,j;
    for(i=1;i<size;i++){
        int key=a[i];
        j=i-1;
        while(j>=0 and a[j]>key){
                a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int p=0;p<size;p++){
        cout<<a[p]<<' ';
    }
}
int main(){
    int a[5]={5,80,2,10,7};
    insertionSort(a,5);
    return 0;
}