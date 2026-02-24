//  C1. Lost Civilization (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int ans=1;
        int bi=0;
        unordered_set<int>st;
        st.insert(a[0]+1);
        bi=a[0]+1;
        for(int i=1; i<n; i++){
            if(a[i]>bi || st.find(a[i])==st.end()){st=unordered_set<int>();ans++;}
            st.insert(a[i]+1);
            bi=a[i]+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}