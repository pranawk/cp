//  E. Product Queries

#include<bits/stdc++.h>

using namespace std;

int main() {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int tt;
     cin >> tt;
     while (tt--) {
         int n;
         cin >> n;
         set<int>st;
         int num;
         for(int i=0; i<n ; i++){
            cin>>num;
            st.insert(num);
         }
         vector<int>dp(n+1,9989);
         for(int i: st)dp[i]=1;
         for(int i=4; i<=n; i++){
            if(dp[i]==1)continue;
            for(int j=1; j*j<=i; j++){
                if(i%j==0)dp[i]=min(dp[i],dp[j]+dp[i/j]);
            }
         }
         for(int i=1; i<=n; i++){
            if(dp[i]==9989)cout<<-1<<" ";
            else cout<<dp[i]<<" ";
         }
         cout<<endl;
     }

     return 0;
 }