#include<bits/stdc++.h>
using namespace std;
void solveSudoku(vector<vector<char>>&a){
    map<pair<int,int>,map<int,int>>mp;
    vector<map<int,int>> row(9);
    vector<map<int,int>>col(9);
}

int32_t main(){
    vector<vector<char>> soduku = {
         {"5","3",".",".","7",".",".",".","."}
        ,{"6",".",".","1","9","5",".",".","."}
        ,{".","9","8",".",".",".",".","6","."}
        ,{"8",".",".",".","6",".",".",".","3"}
        ,{"4",".",".","8",".","3",".",".","1"}
        ,{"7",".",".",".","2",".",".",".","6"}
        ,{".","6",".",".",".",".","2","8","."}
        ,{".",".",".","4","1","9",".",".","5"}
        ,{".",".",".",".","8",".",".","7","9"}
    };
    solutionSudoku(soduku);
}