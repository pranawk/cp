//  B. Messages

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,t;
    cin>>n>>a>>b>>c>>t;
    vector<int>ti(n);
    for(int i=0; i<n; i++)cin>>ti[i];
    long long ans=0;
    sort(ti.begin(),ti.end());
    for(int i=0; i<n ; i++){
        if(ti[i]>t)break;
        if(c>b){
            ans+=a+(t-ti[i])*(c-b);
        }
        else ans+=a;
    }
    cout<<ans<<endl;
    return 0;
}