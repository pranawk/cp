//  B. What's the Capital of France?

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
        int mn=INT_MAX,mx=INT_MIN;
        int temp;
        for(int i=0; i<n; i++){cin>>temp; mn=min(mn, temp); mx=max(mx, temp);}
        int ans=mx;
        int aa=0;
        for(int i=31; i>=0; i--){
            if((mx&(1<<i))==(1<<i) && (mn&(1<<i))==0){
                for(int j=i; j>=0; j--){
                    aa|=(1<<j);
                }
                break;
            }
        }
        cout<<(mx|aa)<<endl;
    }
    return 0;
}