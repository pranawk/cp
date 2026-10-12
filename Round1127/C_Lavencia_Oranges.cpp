//  C. Lavencia Oranges

#include<bits/stdc++.h>

using namespace std;
bool sol(int n, int ii){
    int gg=0;
    for(int i=1; i<=n; i++){
        if(ii/i==0)break;
        gg+=(ii/i)*i;
        if(gg>=n)return true;
    }
    if(gg>=n)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int l=1,r=n;
        int ans=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(sol(n,mid)==true){
                ans=min(ans,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        cout<<ans<<endl;
        int pp=1;
        int cn=0;
        for(int i=n; i>=1; i--){
            for(int j=0; j<(ans/i) && cn<n;j++){
                for(int k=0; k<i && cn<n; k++){
                    cout<<pp<<" ";
                    cn++;
                }
                pp++;
            }
        }
        cout<<endl;
    }
    return 0;
}