//  Blocked

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
        bool fl=true;
        for(int i=0; i<n-1; i++)if(a[i]==a[i+1])fl=false;
        if(fl==false)cout<<-1<<endl;
        else {
            for(int i=n-1; i>=0; i--)cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}