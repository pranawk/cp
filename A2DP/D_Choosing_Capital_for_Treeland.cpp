//  D. Choosing Capital for Treeland

#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>>&roads, vector<vector<int>>&roadsin, int ii ){
        
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>roads(n+1),roadsin(n+1);
    for(int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;
        roads[a].push_back(b);
        roadsin[b].push_back(a);
    }
    return 0;
}