//  B. Flip the Bit (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,p;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n; i++)cin>>a[i];
        cin>>p;
        p--;
        int ansl=0,ansr=0;
        int pp=0;
        for(int l=0; l<p; l++){
            if(pp%2==1)a[l]^=1;
            if(a[l]!=a[p]){ansl++;pp++;}
        }
        if(pp%2==1)ansl++;
        pp=0;
        for(int r=n-1; r>p; r--){
            if(pp%2==1)a[r]^=1;
            if(a[r]!=a[p]){ansr++;pp++;}
        }
        if(pp%2==1)ansr++;
        cout<<max(ansl,ansr)<<endl;
    }
    return 0;
}