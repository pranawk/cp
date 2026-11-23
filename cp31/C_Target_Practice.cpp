//  C. Target Practice

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        vector<string>v(10);
        for(int i=0; i<10; i++)cin>>v[i];
        int ans=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(v[i][j]=='X'){
                    int ii=i+1,jj=j+1;
                    if(ii>5)ii=10-ii+1;
                    if(jj>5)jj=10-jj+1;
                    int mx=min(ii,jj);
                    ans+=mx;
//                     cout<<ans<<" ";
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}