#include<iostream>
using namespace std;
struct Node{
    int roll;
    string name;
    float cgpa;
    Node* link;
};
int main(){
    Node* head=NULL;
    Node* first;
    cout<<"Enter the details of student"<<endl;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++){
    first=new Node();
    cout<<"\nRoll No: ";
    cin>>first->roll;
    cout<<"Name: ";
    cin>>first->name;
    cout<<"CGPA: ";
    cin>>first->cgpa;
    cout<<"Details of next Student: \n";
    first->link=head;
    head=first;
    }
    cout<<"The Details of the Students: \n";
    first=head;
    while(first!=NULL){
        cout<<"Roll No.: "<<first->roll<<" Name: "<<first->name<<" CGPA: "<<first->cgpa<<"\n";
        first=first->link;
    }
    cout<<"Searchin the item in the linked list: "<<endl;
    float item=8.5;
    int count=0;
    first=head;
    while(first!=NULL){
        if(first->cgpa==item){
            cout<<first->name<<" ";
            count++;
        }
        first=first->link;
    }
    if(count==0){
        cout<<"\nNo students found"<<endl;
    }else{
         cout<<"Total students with CGPA "<<item<< ": "<<count<<endl;
    }
    Node* temp1=NULL;
    
    return 0;
}