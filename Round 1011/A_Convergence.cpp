//  A. Convergence

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
        sort(a.begin(),a.end());
        int mb=a[n/2];
        int mc=0,jc=0;
        for(int i=0; i<n/2; i++)if(a[i]!=mb)mc++;
        for(int i=n/2; i<n; i++)if(a[i]!=mb)jc++;
        cout<<max(mc,jc)<<endl;
    }
    return 0;
}