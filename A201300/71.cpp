#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned n;cin>>n;
    unsigned ii=0;
    for(unsigned i=0; i<n; i++){
        cout<<n*3+ii<<" ";
        ii++;
    }
    return 0;
}