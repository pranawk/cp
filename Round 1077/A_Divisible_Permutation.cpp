//  A. Divisible Permutation

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
        vector<int>ans(n);
        vector<bool>used(n+1,false);
        ans[n-1]=n;
        used[n]=true;
        for(int i=n-2; i>=0; i--){
            if(ans[i+1]-i-1<=n && ans[i+1]-i-1>=1 && used[ans[i+1]-i-1]==false){
                ans[i]=ans[i+1]-i-1;
                used[ans[i+1]-i-1]=true;
            }
            else{
                ans[i]=ans[i+1]+i+1;
                used[ans[i+1]+i+1]=true;
            }
        }
        for(int i=1; i<=n; i++){
            if(used[i]==false){ans[0]=i-1;break;}
        }
        for(int i=0; i<n ;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}