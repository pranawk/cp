//  A. How Much Does Daytona Cost?

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
        bool fl=false; int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp==k)fl=true;
        }
        cout<<(fl==true ? "YES" : "NO")<<'\n';
    }
    return 0;
}