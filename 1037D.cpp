#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<vector<int>>mat(n,vector<int>(3,0));
        for(int i=0; i<n; i++){
            cin>>mat[i][0]>>mat[i][1]>>mat[i][2];
        }
        sort(mat.begin(),mat.end());
        for(int i=0; i<n; i++){
            if((k>=mat[i][0] && k<=mat[i][1]) && mat[i][2]>k){k=mat[i][2];}
        }
        cout<<k<<'\n';
//        for(int i=0; i<n; i++){
//                    cout<<mat[i][0]<<mat[i][1]<<mat[i][2]<<'\n';
//                }
    }
    return 0;
}