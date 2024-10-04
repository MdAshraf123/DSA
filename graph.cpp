#include<iostream>
#include<queue>
using namespace std;
int **graph=new int*[5];
void createG(){
int x=0,y=0;
for(int i=0;i<5;i++){
    graph[i]=new int[5];
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        graph[i][j]=0;
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
  cout<<"Enter relation in("<<i<<j<<")- ";
  cin>>graph[i][j];  
    }

}
}
int G[5][5]={
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,1},
    {1,1,1,0,1},
    {0,0,1,1,0}
};
void BFS(int graph[5][5],int node){
    queue<int>Q;
    int front;
    int visited[5]={0};
    Q.push(node);
    front=Q.front();
    visited[front]=1;
    
    while(!Q.empty()){
        front=Q.front();
        cout<<front;
        Q.pop();
        // visited[Q.front()]=1;
        for(int j=0;j<5;j++){
            if(graph[front][j] && !visited[j]){
                Q.push(j);
                visited[j]=1;
            }
        }
        

    }
}

int main(){
//  createG();
 BFS(G,0);


    return 0;
}