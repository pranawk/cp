//  B. Always Changing

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
         int zs=0, os=0;
         int L0=0, L1=0;
         char prv=s[0];
         int cn=1;
         if(prv=='0') L0++; else L1++;
         for(int i=1; i<n; i++){
             if(s[i]==prv) cn++;
             else{
                 if(s[i]=='0'){
                     os += cn-1;
                     L0++;
                 }
                 else{
                     zs += cn-1;
                     L1++;
                 }
                 prv = s[i];
                 cn = 1;
             }
         }
         if(s[n-1]=='0'){
             zs += cn-1;
         }
         else{
             os += cn-1;
         }

         int n0 = zs + L0;
         int n1 = os + L1;
         if(abs(n0 - n1) > 2){
             cout << -1 << endl;
             continue;
         }

         int ans = zs + os;
         int diff = abs(zs - os);
         if(diff > 1){
             ans += diff - 1;
         }
         cout << ans << endl;
     }
     return 0;
 }