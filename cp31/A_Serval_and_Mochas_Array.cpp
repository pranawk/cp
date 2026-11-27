//  A. Serval and Mocha's Array

#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        bool fl=false;
        vector<int>a(n);
        for(int i=0 ; i<n; i++)cin>>a[i];
        for(int i=0 ; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(gcd(a[i],a[j])<3){fl=true;break;}
            }
            if(fl==true)break;
        }
        cout<<(fl==true ? "Yes\n" : "No\n");
    }
    return 0;
}