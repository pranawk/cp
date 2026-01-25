//  C. Replace and Sum

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       int n,q;
       cin>>n>>q;
       vector<int>a(n),b(n);
       for(int i=0; i<n; i++)cin>>a[i];
       for(int i=0; i<n; i++)cin>>b[i];
       for(int i=n-1; i>=0; i--){
         if(i+1==n)a[i]=max(a[i],b[i]);
         else a[i]=max(a[i],max(a[i+1],b[i]));
       }
       vector<int>presum(n);
       presum[0]=a[0];

       for(int i=1; i<n; i++)presum[i]=presum[i-1]+a[i];
       while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            if(l==0)cout<<presum[r]<<" ";
            else cout<<presum[r]-presum[l-1]<<" ";
       }
       cout<<endl;
    }
    return 0;
}