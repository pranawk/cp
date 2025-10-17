#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sf=0,fs=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='S'&&s[i+1]=='F')sf++;
        if(s[i]=='F'&&s[i+1]=='S')fs++;
    }
    cout<<(sf>fs ? "YES" : "NO")<<endl;
    return 0;
}