//  C. RemovevomeR

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
        int faz=INT_MAX,fao=INT_MAX,laz=-1,lao=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                faz=min(faz,i);
                laz=max(laz,i);
            }
            else{
                fao=min(fao,i);
                lao=max(lao,i);
            }
        }
        if(lao==-1 ||laz==-1)cout<<1<<endl;
        else if((fao<laz && fao>faz)||(faz<lao && faz>fao))cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}