#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v,int m){
    int s=m+1;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int m=1;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    vector<int> ans = reverse(v,m);

    print(ans);

}
