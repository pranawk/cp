//  B. Introduction to the Niche Internet

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int aa;
        bool fl=true;
        for(int i=0; i<n; i++){cin>>a[i];if(i==0)aa=a[i]; if(a[i]!=aa)fl=false;}
        if(fl==true){
            if(k==n){
                cout<<"YES\n";
                for(int i=0; i<n; i++)cout<<a[i]<<" ";
                cout<<'\n';
            }
            else cout<<"NO\n";
            continue;
        }
        sort(a.begin(),a.end());
        if(a[n-1]==a[n-k-1]){cout<<"NO\n";continue;}
        cout<<"YES\n";
        for(int i= n-k; i<n ; i++)cout<<a[i]<<" ";
        for(int i= n-k-1; i>=0 ; i--)cout<<a[i]<<" ";
        cout<<'\n';
    }
    return 0;
}