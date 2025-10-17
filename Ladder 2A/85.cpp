#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 && s[0]=='0'){cout<<"NO";return 0;}
    //if(n==2 && (s[0]=='0'&& s[1]=='0')){cout<<"NO";return 0;}
    bool r=true;
    int zc=0;int oc=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){zc++;oc=0;}
        if(s[i]=='1'){oc++;zc=0;}
        if(zc==3){r=false;break;}
        if(oc==2){r=false;break;}
        if(i==1 && zc==2){r=false;break;}
        if(i==n-1 && zc==2){r=false;break;}
    }
    cout<<(r==true ? "YES" : "NO")<<endl;

return 0;}