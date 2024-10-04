#include<iostream>
using namespace std;
void countSort(int a[],int size){
    int larger=0;
    for(int i=0;i<size;i++){
        if(a[i]>larger)
            larger=a[i];
    }
    int *ptr=new int[larger+1];
    for(int i=0;i<=larger;i++){
        ptr[i]=0;
    }
    for(int i=0;i<size;i++){
        ptr[a[i]]+=1;
    }
    int r=0,s=0;

    while(s<=larger){
        if(ptr[s]>0){
            a[r++]=s;
            ptr[s]-=1;
        }
            
        else
            s++;
    }
    
}
int main(){
    int arr[5]={4,9,7,4,1};
    countSort(arr,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}