#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> mp;
    mp["s"] = 1;
    mp["h"] = 2;
    mp["u"] = 3;
    
    // inserting value by insert function
    mp.insert(make_pair("e", 0));

    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

//notes

//    iterating over all value of umap
    // unordered_map<string, double>:: iterator itr;
    // cout << "\nAll Elements : \n";
    // for (itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << "  " << itr->second << endl;
    //  }