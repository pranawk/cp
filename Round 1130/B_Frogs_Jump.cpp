//  B. Frogs Jump

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
        string a,b;
        cin>>a>>b;
        int ans=0;
        bool fl=false;
        for(int i=0; i<n; i++){
            if(a[i]=='f' && b[i]=='f'){continue;}
            if(a[i]=='f' || b[i]=='f'){
                if(fl==true){fl=false;continue;}
                else fl=true;
            }
            else if(fl==true){ans++;fl=false;}
        }
        if(fl==true)ans++;
        cout<<ans<<endl;
    }
    return 0;
}