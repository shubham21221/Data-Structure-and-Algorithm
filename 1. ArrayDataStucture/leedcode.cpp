#include <iostream> 
#include <vector>

using namespace std;
void merge(int arr1[], int n, int arr2[], int n1, int arr3[]){
    int i=0,j=0;
    int k =0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr2[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            i++;
        
    }
    //copy frist arry element k
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j<n){
        arr2[k]=arr1[j];
        k++
        j++;
    }
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8]={0};

    merge(arr1, 5,arr2,3,arr3);

    print(arr3,8);

    return 0;
}
