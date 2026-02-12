// Insetion at the beginning

// #include<iostream>
// using namespace std;
// struct Node{
//     string Name;
//     string Number;
//     int time;
//     Node* next;
//     Node* prev;
// };
// int main(){
//     Node* head =NULL;
//     Node* newNode;
//     Node *temp;
//     int n;
//     cout<<"Enter the number of nodes: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         newNode= new Node();
//         cout<<"Enter your name: ";
//         cin>>newNode->Name;
//         cout<<"Enter your phone number: ";
//         cin>>newNode->Number;
//         cout<<"Enter call duration: ";
//         cin>>newNode->time;
//         newNode->next = head;
//         newNode->prev = NULL;
//         if(head!=NULL){
//             head->prev= newNode;
//         }
//         head=newNode;
//     }
//     temp=head;
//     while(temp!=NULL){
//         cout<<temp->Name<<" "<<temp->Number<<" "<<temp->time<<"s"<<endl;
//         temp=temp->next;
//     }
//     return 0;
// }





// Insetion at the end


#include<iostream>
using namespace std;
struct Node{
    string Name;
    string Number;
    int time;
    Node* next;
    Node* prev;
};
int main(){
    Node* head =NULL;
    Node* newNode;
    Node* temp;
    Node* tail;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        newNode= new Node();
        cout<<"Enter your name: ";
        cin>>newNode->Name;
        cout<<"Enter your phone number: ";
        cin>>newNode->Number;
        cout<<"Enter call duration: ";
        cin>>newNode->time;
        newNode->next = NULL;
        newNode->prev = NULL;
        if(head!=NULL){
            head->prev= newNode;
        }
        head=newNode;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->Name<<" "<<temp->Number<<" "<<temp->time<<"s"<<endl;
        temp=temp->next;
    }
    return 0;
}