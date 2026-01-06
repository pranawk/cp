//  Sum of Two Values

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int a1=-1,a2=-1;
//    unordered_set<int>st;
//    unordered_map<int,int>mp;
//    int a;cin>>a;
//    st.insert(a);
//    mp[a]=1;
//    for(int i=1; i<n; i++){
//        cin>>a;
//        if(st.find(x-a)!=st.end()){
//            a1=mp[x-a];
//            a2=i+1;
//        }
//        st.insert(a);
//        mp[a]=i+1;
//    }
    vector<pair<int,int>>nums(n);
    for(int i=0; i<n; i++){cin>>nums[i].first; nums[i].second=i+1;}
    sort(nums.begin(),nums.end());
    int l,r=n-1;
    while(nums[r-1].first>x)r--;
    l=0;
    while(r>l){
        while(nums[r].first+nums[l].first<x)l++;
        if(r<=l)break;
        if(nums[l].first+nums[r].first==x){a1=nums[l].second;a2=nums[r].second;break;}
        else{
            if(l>0)l--;
            r--;
        }
    }
    if(a1==-1)cout<<"IMPOSSIBLE"<<endl;
    else cout<<a1<<" "<<a2<<endl;
    return 0;
}
//1 1 2 3 3 4 5 7