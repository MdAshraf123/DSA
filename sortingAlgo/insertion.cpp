#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int i=1,j=0,item;
    for(i=1;i<size;i++){
         item=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>item){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=item;
    }
    for(int p=0;p<size;p++){
        cout<<arr[p]<<' ';
    }
}
void insertionSort1(int a[],int size){
    int i,j;
    for(i=1;i<size;i++){
        int item=a[i];
        j=i-1;
        while(j>=0 and a[j]>item){
                a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    for(int p=0;p<size;p++){
        cout<<a[p]<<' ';
    }
}
int main(){
    int a[5]={5,80,2,10,7};
    insertionSort1(a,5);
    return 0;
}