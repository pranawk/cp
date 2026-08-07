//  A. The Best Card

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
        n++;
        bool fl=true;
        for(int i=2; i*i<=n; i++){
            if(n%i==0)fl=false;
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}