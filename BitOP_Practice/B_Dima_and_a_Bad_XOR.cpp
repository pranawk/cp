//  B. Dima and a Bad XOR

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>a[i][j];
    }
    vector<int>ans;
    bool pos=false;
    int aa=0;
    for(int i=0; i<n; i++){
        ans.push_back(1);
        aa^=a[i][0];
    }
    int ii=0;
    while(aa<=0&& ii<n){
        for(int i=0; i<m-1; i++){aa^=a[ii][i]; aa^=a[ii][i+1]; ans[ii]=i+2; if(aa>0)break;}
        ii++;
    }
    if(aa<=0)cout<<"NIE"<<endl;
    else{
        cout<<"TAK"<<endl;
        for(int i=0; i<n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
