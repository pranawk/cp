//  C. Stamina and Tasks

#include<bits/stdc++.h>

using namespace std;
double solve(vector<pair<double,double>>&a, int i){\
    if(i>=a.size())return 0;
    return max(solve(a, i+1), (double)solve(a, i+1)*(1-a[i].second/100)+a[i].first);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pair<double,double>>a(n);
        for(int i=0; i<n; i++){cin>>a[i].first;cin>>a[i].second;};
        double ans=solve(a,0);
        cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}