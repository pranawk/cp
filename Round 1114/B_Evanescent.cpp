//  B. Evanescent

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
        vector<pair<char,int>>pp;
        int prv=s[0];
        int cn=1;
        for(int i=1; i<n; i++){
            if(s[i]==prv)cn++;
            else{
                pp.push_back({prv,cn});
                cn=1;
                prv=s[i];
            }
        }
        pp.push_back({prv,cn});
        int mx=0;
        for(int i=1; i<pp.size()-1; i++){
            if(pp[i].second==1){
                mx=max(mx,1);
                if(pp[i-1].first==pp[i+1].first)mx=max(mx,2);
            }
        }
        cout<<pp.size()-mx<<endl;
    }
    return 0;
}