//  C. Village Guilds

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
        unordered_set<int>st;
        int ans=0,temp;
        for(int i=0; i<n-1; i++){
            cin>>temp;
            if(st.find(temp)!=st.end())ans++;
            st.insert(temp);
        }
        cout<<ans+n<<endl;
    }
    return 0;
}