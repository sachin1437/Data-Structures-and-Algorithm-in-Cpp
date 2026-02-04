#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Element: ";
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int isSorted=0;
    for(int i=0;i<n;i++){
        cout<<"\nWorking on pass number: "<<i+1<<endl;
        isSorted=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted){   
            break;
        }
    }
    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}