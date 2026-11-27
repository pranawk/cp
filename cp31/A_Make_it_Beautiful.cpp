//  A. Make it Beautiful

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
        if(a[0]==a[n-1]){cout<<"NO\n";continue;}
        cout<<"YES\n";
        int ii=0,jj=n-1;
        while(ii<jj){
            cout<<a[ii]<<" "<<a[jj]<<" ";
            ii++; jj--;
        }
        if(ii==jj)cout<<a[ii];
        cout<<'\n';
    }
    return 0;
}