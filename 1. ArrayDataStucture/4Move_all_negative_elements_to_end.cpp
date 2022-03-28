#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for(auto &a:arr) cin>>a;
    int pivot = 0;
    int i= -1;

    for(int j=0;j<n;j++){
        if(arr[j]>0){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    // //move all zero in the array 
    // for(int j=0;i<n;i++){
    //     if(arr[j]!=0){  //only change the if candition and run the program
    //         i++;
    //         swap(arr[j],arr[i]);
    //     }
    // }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    //for(auto &a:arr) cout<<a<<" ";
    return 0;
}

//
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     void segregateElements(int arr[],int n)
//     {
//   int t[n],j=0;
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]>0)
//            {
//                t[j]=arr[i];
//                j++;
//            }
//        }
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]<0)
//            {
//                t[j]=arr[i];
//                j++;
//            }
//        }
//        for(int i=0;i<n;i++)
//        {
//           arr[i]=t[i];
//        }
//    }
// };

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=0;i<n;i++)
// 		cin>>a[i];
// 		Solution ob;
// 		ob.segregateElements(a,n);
		
//         for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// 		cout<<endl;
// 	}
// }