//  A. The Projections of Paco

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
        if(n==1){cout<<a[0]<<endl;continue;}
        int re=0;
        for(int i=n-1; i>=0; i--){
            if(i%2==1)re+=2*a[i];
            else re-=2*a[i];
        }
        cout<<-1*re/2<<endl;
    }
    return 0;
}