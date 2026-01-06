//  A. Little Fairy's Painting

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
     int n;
     cin>>n;
     vector<int>nums(n);
     for(int i=0; i<n; i++)cin>>nums[i];
     unordered_set<int>st;
     int ans=0;
     for(int i=0; i<n; i++)st.insert(nums[i]);
     while(st.find(st.size())==st.end()){st.insert(st.size());}
     cout<<st.size()<<endl;
    }
    
    return 0;
}
