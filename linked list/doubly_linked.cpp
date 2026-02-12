#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
int main() {
    Node* head = NULL;
    Node* newNode;
    Node* temp;
    int n ,value;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Enter value: ";
        cin>>value;
        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
    cout<<"The List is: ";
    temp = head;
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
