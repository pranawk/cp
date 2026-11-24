//  A. Array Coloring

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
        int es=0,os=0,temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp%2==0)es++;
            else os++;
        }
        if(os%2==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}