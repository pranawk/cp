//  D. Simons and Beating Peaks

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
      vector<int>freq(n,0);
      bool fl=true;
      for(int i=1; i<n && a[i]!=n; i++){
        int mx=0;
        for(int j=a[i]-1; j>=1; j--)if(freq[j]>mx)mx=freq[j];
        freq[a[i]]=1+mx;
        if(i+1==n-1 && a[i+1]!=n)fl=false;
      }
      int mx=0;
      for(int j=n-1; j>=1; j--)if(freq[j]>mx)mx=freq[j];
      if(fl==false)mx=0;
      int ans=n-(mx+2);
      vector<int>freq2(n,0);
      fl=true;
      for(int i=n-2; i>=0 && a[i]!=n; i--){
        int mx=0;
        for(int j=a[i]-1; j>=1; j--)if(freq2[j]>mx)mx=freq2[j];
        freq2[a[i]]=1+mx;
        if(i-1==0 && a[i-1]!=n)fl=false;
      }
      mx=0;
      for(int j=n-1; j>=1; j--)if(freq2[j]>mx)mx=freq2[j];
      if(fl==false)mx=0;
      ans=min(ans, (n-mx-2));
      cout<<ans<<endl;
    }
    return 0;
}