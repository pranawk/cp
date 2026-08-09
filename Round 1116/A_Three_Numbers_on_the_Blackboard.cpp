//  A. Three Numbers on the Blackboard

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        vector<int>a(3);
        for(int i=0; i<3; i++)cin>>a[i];
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        ans=min(ans,a[2]-a[0]);
        ans=min(ans,abs(a[1]+a[0]-a[0]));
        ans=min(ans,a[2]+a[0]-a[0]);
        ans=min(ans,a[2]+a[1]-a[1]);
//        ans=min(ans,a)
        cout<<ans<<endl;
    }
    return 0;
}