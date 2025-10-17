#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>g(n);
        for(int i=0; i<n; i++)cin>>g[i];
        sort(g.begin(),g.end());
        bool flag=false;
        for(int i=0; i<n-1; i++){
            if(g[i]==g[i+1]){flag=true; break;}
        }
        cout<<(flag==true ? "Yes" : "No")<<endl;
    }

    return 0;
}