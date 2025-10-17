#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>nums(m+1,0);
        vector<vector<int>>s(n);
        for(int i=0; i<n; i++){
            int l;cin>>l;
            for(int j=0; j<l; j++){
                int tem; cin>>tem;
                s[i].push_back(tem);
                nums[tem]++;
            }
        }
        bool go=true;
        for(int i=1; i<m+1; i++)if(nums[i]==0){cout<<"NO"<<endl;go=false;break;}
        if(go==false)continue;
        int nrc=0;
        for(int i=0; i<n; i++){
            bool fl=true;
            for(int j=0; j<s[i].size(); j++){
                if(nums[s[i][j]]<=1)fl=false;
            }
            if(fl==true)nrc++;
        }

        cout<<(nrc>1 ? "YES" : "NO")<<endl;
    }
    return 0;
}