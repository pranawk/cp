//  B. Interesting Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n,-1);
    bool fl=true;
    vector<vector<int>>tem;
    for(int i=0; i<m; i++){
        int l,r,q;
        cin>>l>>r>>q;
        l--;r--;
        tem.push_back({l,r,q});
        for(int j=l; j<=r; j++){
            if(a[j]==-1)a[j]=q;
            else{
                a[j]|=q;
            }
        }
    }
    for(int i=0; i<m; i++){
        int l=tem[i][0];
        int r=tem[i][1];
        int q=tem[i][2];
        int qq=a[l];
        for(int j=l; j<=r; j++){
            qq&=a[j];
        }
        if(qq!=q)fl=false;
    }
    if(fl==true){
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)cout<<a[i]<<" ";
    }
    else cout<<"NO";
    return 0;
}