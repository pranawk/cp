//  B. Vile Grasshoppers

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int p,y;
    cin>>p>>y;
    int ans=-1;
    for(int i=y; i>p; i--){
        bool fl=true;
        for(int j=2; j<=p && j*j<=i; j++)if(i%j==0){fl=false;break;}
        if(fl==true){ans=i;break;}
    }
    cout<<ans<<endl;
    return 0;
}
