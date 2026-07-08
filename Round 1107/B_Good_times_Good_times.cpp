//  B. Good times Good times

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
        string s2="1";
        for(int i=0; i<s.size()-1; i++)s2+='0';
        s2+='1';
        cout<<s2<<endl;
    }
    return 0;
}