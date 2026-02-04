#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head= NULL;
    Node* first=new Node();
    first->data=10;
    first->next=NULL;
    head=first;
    Node* second=new Node();
    second->data=20;
    second->next=NULL;
    first->next=second;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}    