//  B. XOR Array

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>b(n);
        for(int i=0; i<n; i++){
            b[i]=i+1;
        }
        if(l-2<0)b[r-1]=0;
        else b[r-1]=b[l-2];
        cout<<1<<" ";
        for(int i=1; i<n; i++)cout<<(b[i]^b[i-1])<<" ";
        cout<<endl;
    }
    
    return 0;
}
