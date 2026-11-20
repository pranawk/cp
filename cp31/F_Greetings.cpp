//  F. Greetings

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pair<int,int>>a(n);
        for(int i=0; i<n ; i++){
            cin>>a[i].first>>a[i].second;
        }
        sort(a.begin(),a.end());
        long long ans=0;
        Oset st;
        for(int i=0; i<n; i++){
            ans+= i- st.order_of_key(a[i].second);
            st.insert(a[i].second);
        }
        cout<<ans<<'\n';
    }
    return 0;
}