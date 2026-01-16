//  A. Marks

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>intm(m,0);
    vector<string>ss;
    while(n--){
        string s;
        cin>>s;
        ss.push_back(s);
        for(int i=0; i<m; i++){
            if(s[i]-'0'>intm[i])intm[i]=s[i]-'0';
        }
    }
    int cn=0;
    for(int i=0; i<ss.size(); i++){
        for(int j=0; j<m; j++){
            if(ss[i][j]-'0'==intm[j]){cn++;break;}
        }
    }
    cout<<cn<<endl;
    return 0;
}