//  B. String Construction

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
        if(k>n-2){cout<<-1<<endl;continue;}
        string s;
        int cn0=0,cn1=0;
        for(int i=0; i<(k+1)/2+1; i++){s+='1';cn1++;}
        for(int i=0; i<k/2+1; i++){s+='0';cn0++;}
        while(1){
            if(cn1+cn0==n)break;
            if(cn1+cn0+1==n && cn1-cn0==1){
                s='0'+s;break;
            }
            s+='1';cn1++;
            if(cn1+cn0!=n)s+='0',cn0++;
        }
        cout<<s<<endl;
    }
    return 0;
}