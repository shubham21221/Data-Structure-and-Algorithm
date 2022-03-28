#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e= n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLenght(char name[]){
    int count = 0;
    for(int i=0;name [i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<< "Enter the name :"<<endl;
    cin>>name;//input
    cout<<"Your name is :";
    cout<< name << endl;//output

//print the length
    int len = getLenght(name);
    cout<< "Length :"<< len <<endl;

// cout<<" the reverse strig is :"<<endl;
    reverse(name,len);
    cout<<"Your name is:";
    cout<<name<<endl;

//check palindrome
    cout<< " Palindrome or not : "<< checkPalindrome(name,len)<<endl;

    return 0; 
}

