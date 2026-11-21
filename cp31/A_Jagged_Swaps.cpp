//  A. Jagged Swaps

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
        if(a[0]==1)cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}