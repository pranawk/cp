//  C. Duck Surplus

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
        long long mx=a[0];
        for(int i=0; i<n-1; i++){
            if(a[i+1]<mx)mx+=a[i+1];
            else if(a[i+1]>=mx)mx=a[i+1];
        }
        cout<<mx<<endl;
    }
    return 0;
}