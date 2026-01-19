//  B. Prefix Max

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
        int mx=1;
        int ii=0;
        for(int i=0; i<n; i++){
            cin>>ii;
            mx=max(ii,mx);
        }
        cout<<mx*n<<endl;
    }
    return 0;
}