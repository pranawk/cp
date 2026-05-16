//  B. OIE Excursion

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        bool fl=true;
        int csm=0,cm=-1;
        for(int i=0; i<n; i++){
            if(a[i]!=cm){
                cm=a[i];csm=1;
            }
            else csm++;
            if(csm>=m)fl=false;
        }
        cout<<(fl==true ? "YES": "NO")<<endl;
    }
    return 0;
}