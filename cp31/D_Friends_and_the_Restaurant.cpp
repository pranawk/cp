//  D. Friends and the Restaurant

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,temp;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++){cin>>temp; a[i]=temp-a[i];}
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            if(a[l]+a[r]>=0){ans++;l++ ; r--;}
            else l++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}