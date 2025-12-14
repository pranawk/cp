//  Movie Festival

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>times(n);
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        times[i].first=b;
        times[i].second=a;
    }
    sort(times.begin(),times.end());
    int ans=1;
    int ll=0;
    for(int i=1; i<n; i++){
        if(times[i].second>=times[ll].first){
            ans++;
            ll=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
