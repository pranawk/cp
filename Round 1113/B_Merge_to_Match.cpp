//  B. Merge to Match

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
        vector<int>a(n),b(m);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<bool>used(n,false);
        int l=0,r=0,ii=0;
        bool fl=true;
        while(r<n){
            if(a[r]==b[ii]){
                used[r]=true;
                r++;ii++;
            }
            else{
                while(l<n && used[l]==true)l++;
                if(a[l]<=b[ii]){
                    used[l]=true;
                    l++;
                    ii++;
                }
                else {fl=false; break;}
            }
            if(ii==m)break;
        }
        int yc=0;
        for(int i=n-1; i>=0; i--){
            if(used[i]==false)yc++;
            else yc--;
            if(yc<0)fl=false;
        }
        if(fl==false || ii!=m)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}