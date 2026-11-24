//  C. Removing Smallest Multiples

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
        vector<bool>done(n,false);
        long long ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                int ii=i+1;
                while(ii-1<n && s[ii-1]=='0'){
                    if(s[ii-1]=='0'){
                        if(done[ii-1]==false){
                            done[ii-1]=true;
                            ans+=i+1;
                        }
                    }
                    ii+=i+1;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}