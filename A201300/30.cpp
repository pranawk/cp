#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    for(int i=0; i<n; i++)mp[nums[i]]=i;
    int q;
    cin>>q;
    long long vp=0,pp=0;
    while(q--){
        int qi;
        cin>>qi;
        vp+=mp[qi]+1;
        pp+=abs(n-mp[qi]);
    }
    cout<<vp<<" "<<pp<<endl;
    return 0;
}