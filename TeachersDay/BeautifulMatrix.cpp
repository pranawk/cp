#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<vector<int>>mat(5,vector<int>(5));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
        }
    }
    int refi,refj;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j]>0){refi=i;refj=j;}
        }
    }
    int res= abs(refi-2)+ abs(refj-2);
    cout<<res;

return 0;
}