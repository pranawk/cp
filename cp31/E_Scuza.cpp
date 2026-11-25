//  E. Scuza

#include<bits/stdc++.h>

using namespace std;
int solve(int l, int r, int & ii, vector<int>&bg){
    if(l>=r)return l;
    int mid= l+(r-l+1)/2;
    if(bg[mid]>ii)return solve(l, mid-1, ii, bg);
    else return solve(mid, r, ii, bg);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<long long>ps(n);
        for(int i=0; i<n; i++){
            if(i==0)ps[i]=a[i];
            else ps[i]=ps[i-1]+a[i];
        }
        vector<int>bg(n);
        for(int i=0; i<n; i++){
            if(i==0)bg[i]=a[i];
            else bg[i]=max(a[i],bg[i-1]);
        }
        for(int i=0; i<m; i++){
            int q;
            cin>>q;
            int gg= solve(0, n-1, q, bg);
            if(bg[gg]> q)cout<<"0 ";
            else cout<< ps[gg] <<" ";
        }
        cout<<'\n';
    }
    return 0;
}