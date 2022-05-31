#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string, double> umap;
    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
    
    string key = "PI";
    // If key not found in map iterator to end is returned
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";
    // If key found then iterator to that key is returned
    else
        cout << "Found " << key << "\n";
}


// notes 

// frist note 
// If key not found in map iterator to end is returned
    // key = "lambda";
    // if (umap.find(key) == umap.end())
    //     cout << key << " not found\n";
    // If key found then iterator to that key is returned
    // else
    //     cout << "Found " << key << endl;

// second note.//    iterating over all value of umap
    // unordered_map<string, double>:: iterator itr;
    // cout << "\nAll Elements : \n";
    // for (itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << "  " << itr->second << endl;
    //  }