//  B. Rhythmic String

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
        int mxc=0;
        for(int i=0; i<n; i++){
            int cn=0;
            for(int j=0; j<n; j++){
                if(a[j]%a[i]==0)cn++;
            }
            mxc=max(cn,mxc);
        }
        cout<<n-mxc<<endl;
    }
    return 0;
}