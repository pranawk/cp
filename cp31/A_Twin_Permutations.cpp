//  A. Twin Permutations

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
        for(int i=0; i<n; i++){
            cin>>temp;
            cout<<(n+1)-temp<<" ";
        }
        cout<<'\n';
    }
    return 0;
}