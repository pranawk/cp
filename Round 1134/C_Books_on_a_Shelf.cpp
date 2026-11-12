//  C. Books on a Shelf

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,temp;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>temp;
            mp[temp]++;
        }
        vector<int>a1,a2;
        int ans=0;
        for(auto i:mp){
            ans++;
            a1.push_back(i.first);
            mp[i.first]--;
        }
        for(auto i:mp){
            if(i.second>0){
                ans++;
                a2.push_back(i.first);
                mp[i.first]--;
            }
        }
        cout<<ans<<'\n';
        for(int i=0; i<a1.size(); i++)cout<<a1[i]<<" ";
        for(auto i:mp){
            for(int j=0; j<i.second; j++)cout<<i.first<<" ";
        }
        for(int i=a2.size()-1; i>=0; i--)cout<<a2[i]<<" ";
        cout<<'\n';
    }
    return 0;
}