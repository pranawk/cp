//  C. All-in-one Gun

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,h,k;
        cin>>n>>h>>k;
        long long sum=0;
        vector<long long>mag(n);
        for(int i=0; i<n; i++){
            cin>>mag[i];
            sum+=mag[i];
        }
        if(h%sum==0){cout<<(h/sum)*(n+k)-k<<endl;continue;}
        long long ans=0;
        ans+=(h/sum)*1ll*(n+k);
        h=h%sum;
        vector<long long> mx(mag), mn(mag);
        for(int i=1; i<n; i++){mn[i]=min(mn[i-1],mn[i]);}
        for(int i=n-2; i>=0; i--){mx[i]=max(mx[i+1],mx[i]);}
        long long ssum=0,sum2=0;
        int i=0;
        while(sum2<h ){
            ssum+=mag[i];
            if(i!=n-1)sum2=max(ssum,ssum-mn[i]+mx[i+1]);
            else sum2=ssum;
            i++;
            //cout<<sum2<<" ";
        }
        ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}