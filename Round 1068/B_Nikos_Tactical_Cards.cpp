//  B. Niko's Tactical Cards

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        long long posscr=0,negscr=0;
        for(int i=0; i<n; i++){
            long long f=posscr-a[i];
            long long e=negscr-a[i];
            long long c=b[i]-posscr;
            long long d=b[i]-negscr;
            posscr=max(f,max(e,max(c,d)));
            negscr=min(f,min(e,min(c,d)));
        }
        cout<<max(posscr,negscr)<<endl;
    }
    
    return 0;
}
