//  B. Xenia and Ringroad

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    long long ans=0;
    int aa=1;
    for(int i=0; i<m; i++){
        int nn;
        cin>>nn;
        if(nn>=aa){ans+=nn-aa; aa=nn;}
        else {ans+=n-aa+nn; aa=nn;}
    }
    cout<<ans<<endl;
    return 0;
}