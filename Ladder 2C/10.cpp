#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    int cn=0;
    for(int i=0 ;i<n; i++){
        int lcn=0;
        for(int j=0; j<m; j++){
            if(s[i][j]=='*')lcn=0;
            else lcn++;
            if(lcn>=k)cn++;
        }
    }if(k!=1){
    for(int i=0; i<m; i++){
        int lcn=0;
        for(int j=0; j<n; j++){
            if(s[j][i]=='*')lcn=0;
            else lcn++;
            if(lcn>=k)cn++;
        }
    }}
    cout<<cn<<endl;
    return 0;
}