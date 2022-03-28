#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int n, int k){

    sort (arr ,arr+n);
    return arr[k-1];
}

int main(){
    int arr[]= {12,3,5,7,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<"k'th smallest element is :"<< kthsmallest(arr,n,k);
    return 0;
}