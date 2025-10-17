#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s,m;
    cin>>n>>s>>m;
    vector<int>sd(n),md(n);
    for(int i=0; i<n; i++){sd[i]=s[i]-'0';}
    for(int i=0; i<n; i++){md[i]=m[i]-'0';}

    sort(sd.begin(),sd.end());
    sort(md.begin(),md.end());
    int aa=0;
    int ii=n-1;
    for(int i=n-1; i>=0; i--){
        if(ii>=0 && sd[i]>md[ii])aa++;
        else ii--;
    }
    ii=0;
    int bb=0;
    for(int i=0; i<n; i++){
        while(ii<n&& md[ii]<=sd[i]){ii++;}
        if(ii<n && md[ii]>sd[i]){ii++; bb++;}
        if(ii>=n)break;
    }
    cout<<aa<<endl<<bb<<endl;
return 0;
}