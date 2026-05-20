//  D. Good Schedule

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
        vector<int>a(n),b(n);
        vector<int>la(n+1,n),lb(n+1,n),dp(n+1,n);
        for(int i=0; i<n; i++){cin>>a[i],--a[i];}
        for(int i=0; i<n; i++){cin>>b[i],--b[i];}
        long long ans=0;
        for(int i=n-1; i>=0; --i){
            la[a[i]]=i;
            lb[b[i]]=i;
            if(a[i]==b[i]){
                int x =a[i]+1;
                if(la[x]==lb[x]){
                    dp[i]=dp[la[x]];
                }
                else{
                    dp[i]=min(la[x],lb[x]);
                }
            }
            if(la[0]!=lb[0]){
                ans+=min(la[0],lb[0])-i;
            }
            else{ans+=dp[la[0]]-i;}
        }
        cout<<ans<<endl;
    }
    return 0;
}