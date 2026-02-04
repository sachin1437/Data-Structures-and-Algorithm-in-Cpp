#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={12,34,65,12,76,15,54,123,43};
    int smallest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Smallest Element: "<<smallest;
    return 0;
}