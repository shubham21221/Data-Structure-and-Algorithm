#include<iostream.h>
#include<vector>
using namespace std;

void merge(int arr1[] ,int n
          ,int arr2[] ,int m
               ,int arr3[]){

    int i=0;
    int j=0;
    int k=0;

//include the n and m value in the k
    while( i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy frisr array k element ko 
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        j++;
    }
    while(j<m){
        arr2[k]=arr2[j];
        k++;
        j++;
    }
}
void print(int ans[],int  n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,3,5,6,8};
    int arr2[3]={2,4,7};

    int arr3[8]={0};
    
    merge(arr1,5,arr2,3,arr3);

    print(arr3,8);

    return 0;
}