#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(k);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<k; i++)cin>>b[i];
        sort(b.begin(),b.end());
        sort(a.begin(),a.end());
        long long ans=0;int r=n-1;
        for(int i=0; i<k; i++){
            int j=r;
            if(b[i]>r+1)break;
            while(b[i]!=1){
                ans+=a[j];j--;b[i]--;
            }
            r=j-1;
        }
        while(r>=0){ans+=a[r];r--;}
        cout<<ans<<endl;
    }
    return 0;
}