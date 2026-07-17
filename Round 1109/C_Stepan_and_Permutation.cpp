//  C. Stepan and Permutation

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        bool fl=true;
        vector<bool>dp(n+1,false);
//        dp[0]=true;
//        for(int i=x; i<=n; i++)if(dp[i-x]==true)dp[i]=true;
//        for(int i=y; i<=n; i++)if(dp[i-y]==true)dp[i]=true;
        int dif=abs(x-y);
//        for(int i=dif; i<=n; i++)if(dp[i-dif]==true)dp[i]=true;
        int gc=gcd(x,y);
        for(int i=0; i<n; i++){
            dif=abs(a[i]-i-1);
            if((dif%gc)!=0){fl=false;continue;}
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}