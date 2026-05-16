//  B. Alternating String

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int ca=0;
        for(int i=0; i<s.size()-1; i++){if(s[i]==s[i+1]){ca++;}}
        cout<<(ca<=2 ?"YES" : "NO")<<endl;
    }
    return 0;
}