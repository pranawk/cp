#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long ans=1;
    int k=1;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(n==0){
          if(min(a,b)>=k)ans+=min(a,b)-k;
          if((a!=0 && b!=0) && max(a,b)!=k)ans++;
          }
        else if(min(a,b)>=k)ans+=max(a,b)-k;
        k=max(k,max(a,b));
    }
    cout<<ans<<endl;
    return 0;
}