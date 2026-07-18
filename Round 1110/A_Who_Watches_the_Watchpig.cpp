//  A. Who Watches the Watchpig?

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        if((2*k)>n){cout<<-1<<endl;continue;}
        for(int i=0; i<k; i++){
            if(s[i]=='L')cnt++;
        }
        for(int i=n-1; i>=n-k; i--){
            if(s[i]=='R')cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}