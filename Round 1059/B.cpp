#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s;
        cin>>s;
        vector<int>ind;
        for(int i=0; i<n; i++){
            if(s[i]=='1')ind.push_back(i+1);
        }
        cout<<ind.size()<<endl;
        for(int i=0; i<ind.size(); i++)cout<<ind[i]<<" ";
        cout<<endl;
    }

    return 0;
}