//  A. Yes or Yes

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int sc=0;
        for(int i=0; i<s.size(); i++)if(s[i]=='Y')sc++;
        cout<<(sc>1 ? "NO" : "YES")<<endl;
    }
    
    return 0;
}
