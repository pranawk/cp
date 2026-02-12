//  B. Sale

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=0;
    int l=0;
    while(a[l]<0 && m>0){
        ans+=abs(a[l]);
        m--;
        l++;
    }
    cout<<ans<<endl;
    return 0;
}