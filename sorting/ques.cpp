#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int temperature[n];
    for(int i=0;i<n;i++){
        cout<<"Temperature: ";
        cin>>temperature[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1-i;j++){
            if(temperature[j]>temperature[j+1]){
                int temp=temperature[j];
                temperature[j]=temperature[j+1];
                temperature[j+1]=temp;
            }
        }
    }
    cout<<"Temperature Increase Record: ";
    for(int i=0;i<n;i++){
        cout<<temperature[i]<<" ";
    }
    return 0;
}