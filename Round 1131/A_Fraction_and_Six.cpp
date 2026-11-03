//  A. Fraction and Six

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
        string a,b;
        cin>>a>>b;
        vector<int>alpha(26,0);
        for(int i=0; i<n; i++)alpha[a[i]-'a']++;
        for(int i=0; i<m; i++)alpha[b[i]-'a']--;
        bool fl=true;
        for(int i=0; i<26; i++){
            if(i=='s'-'a' || i=='i'-'a' || i=='x'-'a'){if(alpha[i]!=1)fl=false;}
            else {if(alpha[i]!=0)fl=false;}
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}