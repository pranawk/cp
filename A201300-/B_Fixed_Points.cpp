//  B. Fixed Points

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int cn=0;
    unordered_set<int>st;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        if(nums[i]==i)cn++;
        else{
            st.insert(nums[i]);
            mp[nums[i]]=i;
        }
    }
    if(st.size()<2){cout<<cn<<endl;return 0;}
    for(auto i: st){
        if(mp[mp[i]]==i){
            //cout<<mp[9]<<endl;
            cout<<cn+2<<endl;
            return 0;
        }
    }
    cout<<cn+1<<endl;
    return 0;
}