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
        int maxd=0;
        for(int i=0; i<n-1; i+=2){
            int t=(abs(a[i]-a[i+1]));
            if(t>maxd)maxd=t;
        }
        cout<<maxd<<endl;
    }
    return 0;
}