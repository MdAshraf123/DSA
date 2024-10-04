#include<iostream>
using namespace std;
int partition(int arr[],int r,int s){
    int pivot=arr[r];
    int i=r,j=s;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)
        swap(arr[i],arr[j]);
    }while(i<j);
    swap(arr[j],arr[r]);
    return j;
}
void QuickSort(int arr[],int i,int j){
if(i<j){
    int mid=partition(arr,i,j);
    QuickSort(arr,i,mid);
    QuickSort(arr,mid+1,j);
}
    
};
int main(){
    int a[11]={34,64,34,23,13,2,46,78,60,90,100};
    QuickSort(a,0,10);
    for(int p:a){
        cout<<p<<" ";
    }
    return 0;
}