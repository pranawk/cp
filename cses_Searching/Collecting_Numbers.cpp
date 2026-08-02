//  Collecting Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int ans=0;
    unordered_set<int>st;
    for(int i=0; i<n; i++){
        if(st.find(a[i]-1)==st.end())ans++;
        st.insert(a[i]);
    }
    cout<<ans;
    return 0;
}