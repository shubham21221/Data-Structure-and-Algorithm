#include<bits/stdc++.h>
using namespace std;

void findPair(int num[],int n,int target){
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        if(mp.find(target - num[i])!= mp.end()){
            cout<<num[mp[target-num[i]]]<<num[i];
            return;
        }
        mp[num[i]]=i;
    }
}

int main(){
    int num[] = {8,7,2,5,3,1};
    int traget = 10;

    int size = sizeof(num)/sizeof(num[0]);

    findPair(num,size,traget);
    return 0;
}