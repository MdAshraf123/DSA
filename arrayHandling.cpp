#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
 int array[10];
 int n;
void insertEnd();
void display();
void insertAt();
void delet();
void findLoc();

int main(){
    int choice=0;
    cout<<"How many numbers you have to enter in the array- ";
    cin>>n;
    n-=1;
    for(int i=0;i<=n;i++){
    cout<<"Enter number at "<<i<<"th position- ";
    cin>>array[i];
    };
   //choice to select operation
   cout<<"*********Task Menu**********"<<endl<<"Enter 1 to insert element at the end"<<endl<<"Enter 2 to insert a given element at given index"<<endl;
   cout<<"Enter 3 to delete any arbitary element "<<endl<<"Enter 4 to find the location of a given element"<<endl<<"Enter 5 to display all elements"<<endl<<"Enter 6 to exit"<<endl;
   cout<<"What's your option- ";
   cin>>choice;
   while(choice!=6){
   switch(choice){
    case 1:insertEnd();
    break;
    case 2:insertAt();
    break;
    case 3:delet();
    break;
    case 4:findLoc();
    break;
    case 5:display();
    break;
    default:"Your choice is wrong";
   };
   cout<<"\nWhat's your next option- ";
   cin>>choice;
   }
   cout<<"*********Thank You***********";

return 0;
}

//fuction to insert an element at the end of the array
void insertEnd(){
    n++;
    cout<<"which number you have to insert at the end- ";
     cin>>array[n];
}

//function to insert a given element at given index;
void insertAt(){
    int loc,i=n,item;
    n++;
    cout<<endl<<"Enter location and item that you want to insert- ";
    cin>>loc>>item;
    for(loc;i>=loc;i--){
        array[i+1]=array[i];
    }
    array[loc]=item;
   // cout<<endl;
}

//function to delete any arbitary element from the array
void delet(){

    int loc=0,item;
    int boolian=0;
    cout<<"Which element you want to delete- ";
    cin>>item;
    for (int i=0;i<n;i++)
    {
       if(array[i]==item){
        loc=i;
        boolian=1;
       };
       if(boolian){
        array[loc]=array[loc+1];
       }
       loc++;
    }
n--;
}

//function to find the location of a given element
void findLoc(){
    int elemnt;
    cout<<"Enter the element of which you have to find loc- ";
    cin>>elemnt;
    for(int i=0; i<=n;i++){
        if(array[i]==elemnt)
          cout<<"Element found, index is- "<<i<<endl;
    }
}

//fuction to display all the elements to the console screen
void display(){
    for(int i=0;i<=n;i++){
        cout<<"{"<<array[i]<<"}";
    }
}


