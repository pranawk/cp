//  C2. We Be Flipping (Hard Version)

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
        vector<int>ns(n),ps(n);
        int negsum=0,possum=0;
        int lpi=0;
        for(int i=0; i<n; i++)if(a[i]>0)lpi=i;
        for(int i=0; i<=lpi; i++){
            if(a[i]>0)possum+=a[i];
            else negsum+=-1*a[i];
            ps[i]=possum;
            ns[i]=negsum;
        }
        vector<int>seq,seq2;
        int ii=1;
        for(int i=n-1; i>=0; i--){
            if(ii==1 && ns[i])
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}