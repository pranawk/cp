//  C. Assembly via Minimums

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n, temp;
        cin>>n;
        map<int, int>mp;
        for(int i=0; i<(n*(n-1))/2; i++){
            cin>>temp;
            mp[temp]++;
        }
        vector<int>ans;
        int ii=0;
        for(auto i:mp){
            int dif= i.second;
            while(dif>0){
                ans.push_back(i.first);
                dif-=(n-ii-1);
                ii++;
            }
            if(ans.size()==n)break;
        }
        ii=ans[ans.size()-1];
        while(ans.size()!=n)ans.push_back(ii);
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<'\n';
    }
    return 0;
}