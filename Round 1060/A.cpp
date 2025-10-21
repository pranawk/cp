#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int pr=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'&& pr<=0){pr=k-1; ans++;}
            else if(s[i]=='1'&& pr>0)pr=k-1;
            else pr--;
        }
        cout<<ans<<endl;
    }
    return 0;
}