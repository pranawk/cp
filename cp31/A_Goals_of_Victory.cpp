//  A. Goals of Victory

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
        int cn=0;
        int temp;
        for(int i=0; i<n-1; i++){
            cin>>temp;
            cn+=temp;
        }
        cout<<-1*cn<<'\n';
    }
    return 0;
}