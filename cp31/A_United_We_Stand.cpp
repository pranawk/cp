//  A. United We Stand

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
        sort(a.begin(),a.end());
        vector<int>b;
        vector<int>c;
        int ii;
        for( ii=0; ii<n; ii++){
            if(ii==0 || a[ii]==a[ii-1])b.push_back(a[ii]);
            else break;
        }
        for(int j=ii; j<n; j++)c.push_back(a[j]);
        if(b.size()==0 || c.size()==0)cout<<-1<<'\n';
        else{
            cout<<b.size()<<" "<<c.size()<<'\n';
            for(int i=0; i<b.size(); i++)cout<<b[i]<<" ";
            cout<<'\n';
            for(int i=0; i<c.size(); i++)cout<<c[i]<<" ";
            cout<<'\n';
        }
    }
    return 0;
}