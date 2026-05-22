//  A. Construct an Array

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
        vector<bool>take(n*2+1,true);
        take[1]=false;
        int ii=1;
        vector<int>ans;
        ans.push_back(1);
        for(int i=1; i<n; i++){
            while(take[ii]==false)ii++;
            if(ii+ans[ans.size()-1]<2*n+1)take[ii+ans[ans.size()-1]]=false;
            ans.push_back(ii);
            ii++;
        }
        for(int i=0; i<n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}