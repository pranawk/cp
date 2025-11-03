#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){cout<<"NO"<<endl;return 0;}
    unsigned diff=0;
    size_t ia=0,ib=0;
    for(size_t i=0; i<a.size(); i++){
        if(a[i]!=b[i]){diff++;if(ib==0)ib=i;else ia=i;}
    }
    if(diff!=0 && diff!=2){cout<<"NO"<<endl;return 0;}
    if(diff==0 ||(a[ia]==b[ib]&&a[ib]==b[ia])){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}
