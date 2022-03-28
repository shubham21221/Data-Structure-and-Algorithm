#include<bits/stdc++.h>
using namespace std;

void Reverse(string &n,int i,int j){
    
    //Base case
    if(i>j)
    return ;

    swap(n[i++],n[j--]);
    // i++;
    // j--;
    Reverse(n,i,j);
}
int main(){

    string name = "Shubham";
    Reverse(name,0,name.length()-1);
    cout<<name<<endl;
    
}
