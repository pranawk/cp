//  A. Desorting

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
        int temp, pv;
        int dif=INT_MAX;
        for(int i=0; i<n; i++){
            pv=temp;
            cin>>temp;
            if(i!=0)dif=min(dif, temp-pv);
        }
        if(dif<0)cout<<0<<'\n';
        else cout<<(dif)/2+1<<'\n';
    }
    return 0;
}