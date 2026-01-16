//  B. Present from Lena

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ii=n;bool fl=true;
    for(int i=0; i<2*n+1; i++){
        string s;
        for(int j=0; j<=ii-1; j++)s+="  ";
        s+=to_string(0);
        for(int j=1; j<=n-ii; j++)s+=" "s+=to_string(j);
        for(int j=n-ii-1; j>=0; j--)s+=" "s+=to_string(j);
        cout<<s<<endl;
        if(ii==0)fl=false;
        if(fl==false)ii++;
        else ii--;
    }
    return 0;
}