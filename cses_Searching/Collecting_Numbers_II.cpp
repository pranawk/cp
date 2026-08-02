//  Collecting Numbers II

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    unordered_map<int,int>mp;
    int ans=0;
    unordered_set<int>st;
    for(int i=0; i<n; i++){
        if(st.find(a[i]-1)==st.end())ans++;
        st.insert(a[i]);
        mp[a[i]]=i;
    }
    for(int i=0; i<m; i++){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int sum=0;
        if(mp[a[r]-1]>l && mp[a[r]-1]<r){
            ans++;
        }
        if(mp[a[r]+1]>l && mp[a[r]+1]<r){
            ans--;
        }
        if(mp[a[l]+1]>l && mp[a[l]+1]<r){
            ans++;
        }
        if(mp[a[l]-1]>l && mp[a[l]-1]<r){
            ans--;
        }
        if(a[l]==a[r]-1)ans++;
        else if(a[l]==a[r]+1)ans--;
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        mp[a[r]]=r;
        mp[a[l]]=l;
        cout<<ans<<endl;
    }
    return 0;
}