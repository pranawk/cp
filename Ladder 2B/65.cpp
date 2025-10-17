#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0; j<n; j++){
            if(s[j]=='#')mat[i][j]=-1;
            else mat[i][j]=0;
        };
    }
    for(int i=0; i<n; i++){
        int lcn=0;
        for(int j=0; j<n; j++){
            if(mat[i][j]!=-1)lcn++;
            else lcn=0;
            if(lcn>=k){
                for(int jj=j; jj>j-k; jj--){
                    mat[i][jj]++;}
            }
        }
    }
    for(int j=0; j<n; j++){
        int lcn=0;
        for(int i=0; i<n; i++){
            if(mat[i][j]!=-1)lcn++;
            else lcn=0;
            if(lcn>=k){
                for(int ii=i; ii>i-k; ii--){
                    mat[ii][j]++;}
            }
        }
    }
    int maxi=0,maxj=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]>mat[maxi][maxj]){maxi=i; maxj=j;}
        }
    }
    cout<<maxi+1<<" "<<maxj+1<<endl;
    return 0;
}