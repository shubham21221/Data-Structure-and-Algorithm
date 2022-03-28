#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int> v, int k){
    vector<int> Temp(v.size());

    for(int i=0;i<v.size();i++){
        Temp[(i+k)%v.size()]=v[i];
    }
    v = Temp;
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
    int k=2;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int> ans = Rotate(v,k);

    print(ans);

}