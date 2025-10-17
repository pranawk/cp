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
        for(int i=0; i<n; i++)a[i]=a[i]%3;
        int sum=0;
        for(int i=0; i<n; i++)sum+=a[i];
        int ll=1,rr=-1;
        sum-=a[0];int rsum=0;
        vector<bool>r(3,true);
        r[a[0]]=false;
        for(int i=1; i<n ;i++){
            rsum+=a[i];
            sum-=a[i];
            if((rsum%3)==a[0] && (sum%3)==a[0]){rr=i+1;break;}
            if((rsum%3)!=(sum%3) && (r[(rsum%3)]==true && r[(sum%3)]==true)){rr=i+1;break;}
        }
        if(rr==-1){cout<<0<<" "<<0<<endl; continue;}
        cout<<ll<<" "<<rr<<endl;
    }
    return 0;
}