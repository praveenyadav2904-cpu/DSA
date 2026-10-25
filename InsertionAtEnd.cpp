#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data=value;
        next=NULL;
    }
  
};
void Show(Node * Head){
    Node *temp=Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main(){
    int arr[]={10,20,30,40,50};
    Node *Head;
    Head=NULL;
    
    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
        }
        else{
         Node *tail=Head;
         while(tail->next!=NULL){
            tail=tail->next;
         }
         Node *temp;
         temp=new Node(arr[i]);
         tail->next=temp;
        }
    }
    Show(Head);

}