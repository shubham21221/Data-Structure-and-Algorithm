#include<bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int temp = arr[0];
        arr[i] = arr[i+1];
        arr[n-1]= temp;
    }
}
void leftRotate(int arr[], int d, int n){
    for(int i=0;i<d;i++){
        leftRotatebyOne(arr,n);
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 2;

    leftRotate(arr,element,n);
    printArray(arr,n);

    return 0;
}