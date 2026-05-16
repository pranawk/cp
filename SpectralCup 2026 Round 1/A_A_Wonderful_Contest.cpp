//  A. A Wonderful Contest

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
        bool fl1=false,fl2=false;
        for(int i=0; i<n; i++){
            int pp;cin>>pp;
            if(pp==100)fl1=true;
            else fl2=true;
        }
        cout<<(fl1==true  ? "Yes" : "No")<<endl;
    }
    return 0;
}