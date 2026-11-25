//  A. Forbidden Integer

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1 &&((k==2 && n%2==1) || k==1)){
            cout<<"NO\n";continue;
        }
        else if(x!=1){
            cout<<"YES\n"<<n<<'\n';
            for(int i=0; i<n; i++)cout<<1<<" ";
            cout<<'\n';
            continue;
        }
        else{
            cout<<"YES\n";
            cout<<(n)/2<<'\n';
            if(n%2==1){cout<<3<<" ";n-=3;}
            for(int i=0; i<n/2 ; i++)cout<<2<<" ";
            cout<<'\n';
        }
    }
    return 0;
}