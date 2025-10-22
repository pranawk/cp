#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<vector<int>>mat1(n,vector<int>(m)),mat2(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>mat1[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>mat2[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat1[i][j]<mat2[i][j])swap(mat1[i][j],mat2[i][j]);
        }
    }
    bool ans=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i!=0 && (mat1[i][j]<=mat1[i-1][j]||mat2[i][j]<=mat2[i-1][j]))ans=false;
            if(j!=0 && (mat1[i][j]<=mat1[i][j-1]||mat2[i][j]<=mat2[i][j-1]))ans=false;
        }
    }
    cout<<(ans==true ? "Possible" : "Impossible")<<endl;
    return 0;
}