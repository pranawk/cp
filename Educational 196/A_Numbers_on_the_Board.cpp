//  A. Numbers on the Board

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int l,r;
        cin>>l>>r;
        int pmx=INT_MAX, nmx=INT_MAX;
        if(l<=0)pmx=-1*l+1;
        if(r>=0)nmx=-1*r-1;
        if(pmx==INT_MAX || nmx==INT_MAX){
            cout<<abs(l-r)<<endl;
            continue;
        }
        cout<<max(0,max(nmx-l, r-pmx))<<endl;

    }
    return 0;
}