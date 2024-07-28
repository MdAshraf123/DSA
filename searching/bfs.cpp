#include<iostream>
#include<queue>
using namespace std;
void bfs(int arr[5][5],int start){
    int i=start;
    queue<int>Q;
    int visited[5]={0,0,0,0,0};
    Q.push(i);
    visited[i]=1;
    while(!Q.empty()){
    i=Q.front();
    cout<<Q.front();
    
    Q.pop();
    for(int j=0;j<5;j++){
        if(arr[i][j]==1 && visited[j]==0){
            Q.push(j);
            visited[j]=1;
        }
    }
    }
}
int main(){
int p[5][5]={
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,1},
    {1,1,1,0,1},
    {0,0,1,1,0}
};
bfs(p,3);

    return 0;
}