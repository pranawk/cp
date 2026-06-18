//  B. Tatar TV Show

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
        bool fl=true;
        for(int i=0 ; i<n-k; i++){
            if(s[i]=='1'){
                s[i]='0';
                if(s[i+k]=='1')s[i+k]='0';
                else s[i+k]='1';
            }
        }
        for(int i=0; i<n ; i++)if(s[i]=='1')fl=false;
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}