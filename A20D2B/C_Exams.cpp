//  C. Exams

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>dates(n);
    for(int i=0; i<n; i++){
        cin>>dates[i].first>>dates[i].second;
    }
    sort(dates.begin(),dates.end());
    int ans=0;
    for(int i=0; i<n; i++){
        int mn=min(dates[i].first,dates[i].second);
        int mx=max(dates[i].first,dates[i].second);
        if(mn>=ans)ans=mn;
        else ans=mx;
    }
    cout<<ans<<endl;
    return 0;
}
