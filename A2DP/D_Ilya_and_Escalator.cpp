//  D. Ilya and Escalator

#include<bits/stdc++.h>

using namespace std;
double dp[2001][2001];

double p;
double solve(int n, int t){
   double ans;
   if(n>=t){
       ans=p*(t);
   }
   else{
       ans=p*n;
       t-=n;
       double pp=p*n;
       for(int i=0; i<t; i++){
           pp*=p;
           ans+=pp;
       }
   }
   return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>p>>t;
    if (p == 1.0) {
       cout << fixed << setprecision(10) << (double)min(n, t);
       return 0;
    }
    double ans=solve(n,t);
    cout << fixed << setprecision(10) << ans;
    return 0;
}