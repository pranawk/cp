//  A. Maximum Neighborhood

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if(n==1){cout<<1<<endl;}
        else if(n==2){cout<<9<<endl;}
        else {
            if(n*(n-2)-1>2*n){cout<<(n*(n-1)-1)*3+(n*n-1)+n*(n-2)-1<<endl;}
            else cout<<(n*n-1)*3+(n*(n-1)-1)<<endl;}
    }
    
    return 0;
}
