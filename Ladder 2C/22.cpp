#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n; i++)cin>>arr[i];
    vector<int>fr(n,0),fr1(n,0);
    unordered_set<int>st,st1;
    for(int i=n-1; i>=1; i--){
        if(st.find(arr[i])==st.end()){
            st.insert(arr[i]);
        }
        fr[i]=st.size();
    }
    for(int i=0; i<n-1; i++){
        if(st1.find(arr[i])==st1.end()){
            st1.insert(arr[i]);
            fr1[i]=st.size();
        }
    }
    //for(int i=0; i<n; i++)cout<<fr[i]<<" ";
    long long ans=0;
    for(int i=0; i<n; i++){
        if(fr1[i]!=0)ans+=fr[i+1];
    }
    cout<<ans<<endl;
    return 0;
}
