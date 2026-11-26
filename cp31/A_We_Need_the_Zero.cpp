//  A. We Need the Zero

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<int>cn(9,0);
        for(int i=0; i<n; i++){
            int ii=0;
            while((1<<ii)<=a[i]){
                if(((1<<ii)&a[i])!=0)cn[ii]++;
                ii++;
            }
        }
        int ans=0;
        bool fl=true;
        for(int i=0; i<9; i++){
            if(cn[i]%2==0)continue;
            else{
                if(n%2==0){fl=false;continue;}
                else ans|=(1<<i);
            }
        }
        if(fl==false)cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
}