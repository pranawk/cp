//  B. Modulo Equality

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        int dif=b[0]-a[i];
        if(b[0]<a[i]){
            dif=b[0]+m-a[i];
        }
        bool fl=true;
        for(int j=0; j<n; j++){
            if((a[(i+j)%n]+dif)%m!=b[j]){fl=false;break;}
        }
        if(fl==true)ans=min(ans, dif);
    }
    cout<<ans<<endl;
    return 0;
}