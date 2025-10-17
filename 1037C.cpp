#include<bits/stdc++.h>
using namespace std;
bool submerge(int n, int k, vector<int>h){
    int curr= h[k-1];
    sort(h.begin(), h.end());
    int level=1;
    int pos=0;while(h[pos]!=curr)pos++;
    for(int i=pos; i<n-1; i++){
        if(h[pos]==h[n-1])return true;
        if(h[pos+1]-h[pos]-1+level>h[pos])return false;
        else{
            level+=h[pos+1]-h[pos];
            pos++;
        }
    }
    return true;
}
int main () {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>heights(n);
        for(int i=0; i<n; i++){cin>>heights[i];}
        cout<<(submerge(n,k,heights) ? "YES" : "NO")<<'\n' ;
    }
    return 0;
}