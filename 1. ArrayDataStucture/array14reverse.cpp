#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){

    int e = n-1;
    for(int i=1;i<e;i++){
        if(arr[i]<0){
            swap(arr[i],arr[n-1]);
        }
    }
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    reverse(arr,n);
}