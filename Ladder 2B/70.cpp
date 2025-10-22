#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    vector<int>alpha(26,0);
    for(int i=0; i<n; i++)alpha[s[i]-'a']++;
    int nn=0;
    int minf=INT_MAX;
    int maxf=0;
    for(int i=0; i<26 ; i++){
        if(alpha[i]>0){
            if(alpha[i]>maxf)maxf=alpha[i];
            nn++;
            if(alpha[i]<=minf)minf=alpha[i];
            }
    }
    bool ans=false;
    if(nn==4){ans=true;}
    if(nn==3&& maxf>=2){ans=true;}
    if(nn==2&& minf>=2)ans=true;
    cout<<(ans==true? "YES" : "NO")<<endl;
return 0;
}