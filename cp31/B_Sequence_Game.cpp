//  B. Sequence Game

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
        vector<int>ans;
        int temp,pv;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(i==0){
                ans.push_back(temp);
                pv=temp;
                continue;
            }
            if(temp<pv){
                ans.push_back(1);
            }
            ans.push_back(temp);
            pv=temp;
        }
        cout<<ans.size()<<'\n';
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<'\n';
    }
    return 0;
}