//  C. Dora and Search

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
        for(int i=0; i<n ; i++)cin>>a[i];
        int l=0,r=n-1;
        int mn=1,mx=n;
        while(l<r){
            if(a[l]==mn || a[l]==mx || a[r]==mn || a[r]==mx){
                if(a[l]==mn || a[l]==mx){
                    if(a[l]==mn){l++; mn++;}
                    else {l++; mx--;}
                }
                if(a[r]==mn || a[r]==mx){
                    if(a[r]==mn){r--; mn++;}
                    else {r--; mx--;}
                }
            }
            else break;
        }
        if(l>=r){
            cout<<-1<<'\n';
            continue;
        }
        cout<<l+1<<" "<<r+1<<'\n';
    }
    return 0;
}