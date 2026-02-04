#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
    
    Node* newnode=new Node();
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    }
    cout<<"Linked List: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;    
    }
    return 0;
}