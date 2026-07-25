//  B. Yet Another Constructive

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k,m;
        cin>>n>>k>>m;
        if(k>m){cout<<"NO"<<endl;continue;}
        int cn=0;
        cout<<"YES"<<endl;
        for(int i=0; i<k-1; i++){
            cout<<1<<" ";cn++;
        }
        cout<<m-cn<<" ";
        for(int i=k; i<n; i++)cout<<1<<" ";
        cout<<endl;
    }
    return 0;
}