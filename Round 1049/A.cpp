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
        string s;
        cin>>s;
        int ans=0;
        int cn = count(s.begin(), s.end(), '0');
        for(int i=0;i<cn;i++){
            if(s[i]=='1') ans++;}
        cout<<ans<<endl;
    }

    return 0;
}