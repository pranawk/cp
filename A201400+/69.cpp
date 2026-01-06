#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,g,b;
    cin>>r>>g>>b;
    bool fl=true;
    if(min(r,min(g,b))==0)fl=false;
    int ans=0;
    ans+=(r/3+g/3+b/3);
    r%=3;g%=3;b%=3;
    int aa=min(r,min(g,b));
    int bb=max(r,max(g,b));
    int cc=(r+g+b)-(aa+bb);
    if(fl==true&&aa==0&&bb==2&&cc==2)ans++;
    ans+=min(r,min(g,b));
    cout<<ans<<endl;
    return 0;
}

//3 5 5
//3
//2 +2=4