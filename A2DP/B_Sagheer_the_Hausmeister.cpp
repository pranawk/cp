//  B. Sagheer, the Hausmeister

#include<bits/stdc++.h>

using namespace std;
int solve(vector<pair<int,int>>&fl, int i, bool lf ,int n){
    if(i==0)return 0;
    int a,b,cn=0;
    int ii=i-1;
    while(ii>=0 && fl[ii].second==-1){ii--;cn++;}
    //cout<<fl[0].second<<endl;
    if(ii<0)return 0;
    if(lf==true){
        a=2*n-fl[i].first+1-fl[ii].first+cn+solve(fl,ii, true,n);
        b=fl[i].first-1+fl[ii].second+cn+solve(fl,ii,false,n);
        a=min(a,b);
    }
    else{
        a= 2*n-fl[i].second-fl[ii].first+1+cn+solve(fl,ii, true,n);
        b=fl[i].second-1+fl[ii].second+cn+solve(fl,ii,false,n);
        a=min(a,b);
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    vector<pair<int,int>>fl(n);
    for(int i=0; i<n; i++){
        int le=s[i].size(),rt=-2;
        for(int j=0; j<s[i].size(); j++){
            if(s[i][j]=='1'){
                le=min(le,j);
                rt=max(rt,j);
            }
        }
        fl[i].first=le+1;
        fl[i].second=rt+1;
    }
    //for(int i=0; i<n; i++)cout<<fl[i].first<<" "<<fl[i].second<<endl;
    int ii=n-1;
    int cn=0;
    while(ii>=0 && fl[ii].second==-1){cn++;ii--;}
    if(ii==-1)cout<<0<<endl;
    else cout<<fl[ii].second-1+cn+solve(fl, ii,false,m+2);
    return 0;
}