

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n);

int main()
{
    
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
        return 0;
}
void rotate(int arr[], int n)
{
    for(int i=0;i<n;i++){
        swap(arr[i],arr[n-1]);
    }
}