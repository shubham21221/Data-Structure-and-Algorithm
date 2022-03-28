#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    if(i>j)
        return false;
    
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return true;
    }
}

int main(){
     
     string name = "pppaa";
     cout<<endl;

     bool isPalindrome = checkPalindrome(name,0,name.length()-1);
     if(isPalindrome){
         cout<<"Its a Plindrome"<<endl;
     }
     else{
         cout<<"Its not Plindrome"<<endl;
     } 
     return 0;
}