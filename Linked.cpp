#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
Node *Head;
Head=new Node(28);

cout<<Head->data<<" ";
cout<<Head->next<<endl;

//Linked List Doesnt exist
if(Head==NULL){
    Head=new Node(15);
}
//Linked List extsts
else{
   Node * temp;
   temp=new Node(15);
   temp->next=Head;
   Head=temp;
}

}