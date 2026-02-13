#include<iostream>
using namespace std;
#define SIZE 50
int plates[SIZE];
int top=-1;
void push(){
    if(top==SIZE-1){
        cout<<"Overflow"<<endl;
        return;
    }
    int num;
    cout<<"Enter plate Number: ";
    cin>>num;
    top++;
    plates[top]=num;
    cout<<"Plate added."<<endl;
}
void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    cout<<"Removed Plate number: "<<plates[top]<<endl;
    top--;
}
bool is_full(){
    return(top==SIZE-1);
}
bool empty(){
    return(top==-1);
}
int main(){
    int choice;
    while(1){
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(is_full()){
                    cout<<"Overflow"<<endl;
                }else{
                    cout<<"You can enter the plates"<<endl;
                }
                break;
            case 2:
                if(empty()){
                    cout<<"Underflow"<<endl;
                } else{
                    cout<<"Still plates are left."<<endl;
                }
                break;
            case 3:
                push();
                break;
            case 4:
                pop();
                break;
            case 5: 
                return 0;
            default:
                cout<<"Invalid Case.";
        }
    }
    return 0;
}