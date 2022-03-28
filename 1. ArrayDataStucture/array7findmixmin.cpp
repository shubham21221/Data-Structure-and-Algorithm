// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int currmin=arr[0];
//     int currmax=arr[0];
    
//     //min max logic
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>currmax)
//         {
//             currmax=arr[i];

//         }
//         if(arr[i]<currmin){
//             currmin=arr[i];
//         }
//     }
//     cout<<currmax<<endl;
//     cout<<currmin<<endl;
// }

// Secound logic 

#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[],int n){

    int min = INT_MAX;
        // Thired method 
        
        // int mani = INT_MAX;
        // for(int i=0;i<n;i++){
        // mani = man(maxi,num[i]);

    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n){

    int max = INT_MIN;

        // Thired method 

        // int maxi = INT_MIN;
        // for(int i=0;i<n;i++){
        // maxi = max(maxi,num[i]);


    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< " maximun value is "<< getMax(arr,n)<<endl;
    cout<< " minmun value is "<< getMin(arr,n);

    return 0;
}