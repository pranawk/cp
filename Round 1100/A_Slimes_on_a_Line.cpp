//  A. Slimes on a Line

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
        int mx=1,mn=1000,temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            mx=max(mx,temp);
            mn=min(mn,temp);
        }
        cout<<(mx-mn+1)/2<<endl;
    }
    return 0;
}