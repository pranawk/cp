#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    unordered_set<int>st;
    vector<int>freq(n,1);
    for(int i=n-1; i>=0; i--){
        st.insert(nums[i]);
        freq[i]=st.size();
    }
    while(m--){
        int a;
        cin>>a;
        cout<<freq[a-1]<<endl;
    }
    return 0;
}