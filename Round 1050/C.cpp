#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){cin>>a[i];cin>>b[i];}
        int ans=0;int pol=0;int point=0;
        for(int i=0; i<n; i++){
            if(b[i]==pol){
                if((a[i]-point)%2==0){
                    ans+=(a[i]-point);
                }
                else ans+=(a[i]-point-1);
                point=a[i];
            }
            else{
                if((a[i]-point)%2==0){
                    ans+=(a[i]-point-1);
                }
                else ans+=(a[i]-point);
                point=a[i];
                pol=b[i];
            }
        }
        if(a[n-1]!=m)ans+=m-a[n-1];
        cout<<ans<<endl;

    }
    return 0;
}