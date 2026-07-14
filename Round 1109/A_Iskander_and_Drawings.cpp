//  A. Iskander and Drawings

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mxs=0,cur=0;
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                mxs=max(mxs,cur);
                cur=0;
            }
            else cur++;
        }
        mxs=max(mxs,cur);
        cout<<(mxs+1)/2<<endl;
    }
    return 0;
}