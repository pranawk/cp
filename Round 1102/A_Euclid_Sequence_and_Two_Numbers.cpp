//  A. Euclid, Sequence and Two Numbers

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
        bool fl=true;
        sort(a.begin(),a.end());
        for(int i=n-3; i>=0; i--){
            if(a[i+2]%a[i+1]!=a[i]){fl=false;}
        }
        if(fl==false){
            cout<<-1<<endl;
        }
        else{
            cout<<a[n-1]<<" "<<a[n-2]<<endl;
        }
    }
    return 0;
}