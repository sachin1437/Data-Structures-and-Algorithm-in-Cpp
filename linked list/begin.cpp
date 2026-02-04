#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* link;
};
int main(){
    Node* head=NULL;
    Node* first;
    int choice=1;
    while(choice==1){
        first=new Node();
        cout<<"Enter the data of the node";
        cin>>first->value;
        first->link=head;
        head=first; 
        cout<<"Continue (1/0): ";
        cin>>choice;
    }
    first=head;
    while(first!=NULL){
        cout<<first->value<<" ";
        first=first->link;
    }
    return 0;
}