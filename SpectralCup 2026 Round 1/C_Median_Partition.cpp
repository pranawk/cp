//  C. Median Partition

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<int>b=a;sort(b.begin(),b.end());
        int mdn=b[n/2];
        vector<int>dp(n+1, 0);
        dp[0]=0;
        for(int i=0; i<n; i++){
            if(a[i]==mdn && dp[i]!=0)dp[i+1]=max(dp[i+1],dp[i]+1);
            else{
                int lc=0,gt=0,eq=0,j;
                for( j=i; j>=0; j--){
                    if(a[j]==mdn)eq++;
                    else if(a[j]<mdn)lc++;
                    else gt++;
                    if((lc+gt+eq)%2==1 && abs(lc-gt)<eq && eq>0 && dp[j]!=0)dp[i+1]=max(dp[i+1], dp[j]+1);
                    if((lc+gt+eq)%2==1 && abs(lc-gt)<eq && eq>0 && j==0)dp[i+1]=max(dp[i+1], dp[j]+1);
                }
            }
        }
        //for(int i=0; i<=n; i++)cout<<dp[i]<<" ";
        cout<<dp[n]<<endl;
    }
    return 0;
}