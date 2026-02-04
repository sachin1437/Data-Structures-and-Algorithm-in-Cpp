#include<iostream>
using namespace std;
int main(){
    int arr[]={21.5,24.3,5.4,2.6,5.1,6.6};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}