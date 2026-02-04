#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cout<<"Element: ";
       cin>>arr[i];
    }
    int item;
    cout<<"Enter the element you want to search: "<<endl;
    cin>>item;
    int count=0;
    for(int i=0;i<n;i++){
        if(item==arr[i]){
            cout<<"The number found at index: "<<i<<endl;
            count++;
        }
    }
    if(count==0){
        cout<<"Element not found.";
    }
    return 0;
}