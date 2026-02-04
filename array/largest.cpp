#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={23,54,7,42,75,2,77,24,331};
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest element: "<<largest;
    return 0;
}