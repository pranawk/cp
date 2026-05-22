//  B. Crossword solving

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int ans=INT_MAX;
    vector<int>a;
    for(int i=0; i<=m-n; i++){
        vector<int>tm;
        for(int j=0; j<n; j++){
            if(s1[j]==s2[i+j])continue;
            else tm.push_back(j+1);
        }
        if(tm.size()<ans){ans=tm.size();a=tm;}
    }
    cout<<ans<<endl;
    for(int i=0; i<a.size(); i++)cout<<a[i]<<" ";
    return 0;
}