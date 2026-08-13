//  B. Always Changing

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
        int zs=0,os=0;
        char prv=s[0];int cn=1;
        for(int i=1; i<n; i++){
            if(s[i]==prv)cn++;
            else{
                if(s[i]=='0'){
                    os+=cn-1;
                }
                else{
                    zs+=cn-1;
                }
                prv=s[i];
                cn=1;
            }
        }
        if(s[n-1]=='0'){
            zs+=cn-1;
        }
        else{
            os+=cn-1;
        }
        //cout<<zs<<" "<<os<<endl;
        if(abs(zs-os)>=2){
            if(zs>os){
                if(abs(zs-os)==2){
                    if((s[0]=='1' && s[1]=='0') || (s[n-1]=='1'&&s[n-2]=='0')){
                        cout<<zs+os+1<<endl;continue;
                    }
                }
                if(abs(zs-os)==3){
                    if((s[0]=='1' && s[1]=='0') && (s[n-1]=='1'&&s[n-2]=='0')){
                        cout<<zs+os+2<<endl;continue;
                    }
                }
            }
            else if(os>zs){
                if(abs(zs-os)==2){
                    if((s[0]=='0' && s[1]=='1') || (s[n-1]=='0'&&s[n-2]=='1')){
                        cout<<zs+os+1<<endl;continue;
                    }
                }
                if(abs(zs-os)==3){
                    if((s[0]=='0' && s[1]=='1') && (s[n-1]=='0'&&s[n-2]=='1')){
                        cout<<zs+os+2<<endl;continue;
                    }
                }
            }
            cout<<-1<<endl;}
        else{
            cout<<zs+os<<endl;
        }
    }
    return 0;
}