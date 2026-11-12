//  D. Letters Down

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
        string s;
        cin>>s;
        int ans=0;
        vector<int>mn(26,0);
        for(int i=0; i<n/2; i++){
            int aa=s[i]-'a';
            int bb=s[n-i-1]-'a';
            int a=min(aa,bb), b=max(aa,bb);
            mn[b]=max(mn[b], b-a);
        }
        int nx=0;
        for(int i=25; i>=0; i--) {
            if(mn[i]>0){
                int tm=nx;
                if(mn[i]>nx){
                    nx=mn[i];
                }
                if(tm>0)mn[i]-=tm;
                mn[i]=max(mn[i],0);
            }
            nx--;
        }
        for(int i=0; i<26; i++)ans+=mn[i];
        cout<<ans<<'\n';
    }
    return 0;
}