//  A. Boss Fight

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
        for(int i=0; i<n; i++){cin>>a[i];}
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            if(l==r){
                ans+=a[l];break;
            }
            if(a[l]==a[r]){
                ans+=a[l]*2;break;
            }
            ans+=a[l];
            ans+=a[r];
            l++;r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}