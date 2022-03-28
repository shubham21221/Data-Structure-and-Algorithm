#include <iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=k;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<"is last array elment"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
        cout<<"is the frist arry element";
        return 0;
}