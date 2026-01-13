//  B. Yet Another MEX Problem

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>nums;
        vector<bool>cc(k+1,false);
        int ii;
        for(int i=0; i<n; i++){
            cin>>ii;
            if(ii>=k-1)continue;
            cc[ii]=true;
        }
        for(int i=0; i<=k; i++)if(cc[i]==false){cout<<i<<endl;break;}
    }
    return 0;
}