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
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        if(n==1){cout<<arr[0]<<endl;continue;}
        long long ans=0;
        int lp=2*arr[0]+0,rp=2*arr[0]-0, ln=-2*arr[1]-1, rn=-2*arr[1]+1;
        for(int i=0; i<n; i++){
            if(i%2==0){
                if(2*arr[i]+i<lp)lp=2*arr[i]+i;
                if(2*arr[i]-i<rp)rp=2*arr[i]-i;
            }
            else{
                if(2*arr[i]-i>ln)ln=2*arr[i]-i;
                if(2*arr[i]+i>rn)rn=2*arr[i]+i;
            }
        }
        int aa;
        if(n%2==0)aa=n-2;
        else aa=n-1;

        int bb=max(aa,max((rn-lp),(ln-rp)));

        for(int i=0; i<n; i++){
            if(i%2==0)ans+=arr[i];
            else ans-=arr[i];
        }
        ans+=max(0,bb);
        cout<<ans<<endl;
    }
    return 0;
}