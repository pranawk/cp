//  A. Grasshopper on a Line

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
        if(n%k==0)cout<<2<<'\n'<<-1<<" "<<n+1<<'\n';
        else cout<<1<<'\n'<<n<<'\n';
    }
    return 0;
}