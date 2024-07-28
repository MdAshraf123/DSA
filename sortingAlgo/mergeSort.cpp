#include<iostream>
using namespace std;
void mergeSort(int a[],int b[],int x,int y){
    int i=0,j=0,size=x+y,q=0;
    int result[size];
    while(i<x && j<y){
        if(a[i]<b[j]){
            result[q++]=a[i++];
        }else{
            result[q++]=b[j++];
        }
    }
    for(;i<x;i++){
        result[q++]=a[i];
    }
     for(;j<y;j++){
        result[q++]=b[j];
    }
    for(int k=0;k<size;k++){
        cout<<result[k]<<' ';
    }
}
int main(){
int a[]={5,7,9},b[]={7,8,15,16,19};
mergeSort(a,b,3,5);
    return 0;
}