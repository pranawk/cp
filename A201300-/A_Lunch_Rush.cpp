//  A. Lunch Rush

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ans=INT_MIN;
    int f,t;
    while(n--){
        cin>>f>>t;
        if(t>k)ans=max(ans, f-(t-k));
        else ans=max(ans, f);
    }
    cout<<ans<<endl;
    return 0;
}