//  B. Different Distances

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
        if(n==2){cout<<"2 1 1 2 2 1 2 1"<<endl;continue;}
        vector<int>ans(4*n);
        ans[0]=1;ans[1]=1; ans[3]=1;ans[6]=1;
        ans[2]=n;
        int ii=4;
        for(int i=2; i<=n ; i++){
            ans[ii]=i;
            ans[ii+1]=i;
            ans[ii+3]=i;
            if(i==n)break;
            ans[ii+6]=i;
            ii+=4;
        }
        for(int i=0; i<4*n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}